#include <iostream>
#include <string>
#include <fstream>
#include "team.h"

//Task 2/4 - No count since there should always be 32 NFL teams, at least for now
team* read_teams_from_file(const std::string& path)
{
	team* teams = new team[32];

	std::ifstream stream;
	stream.open(path);

	std::cout << "Reading data from CSV file..." << std::endl;

	if (stream.is_open())
	{
		std::string line;
		std::getline(stream, line);

		for (int i = 0; i < 32; i++)
		{
			std::getline(stream, line, ','); //Stop if it sees ","
			std::string name = line;

			std::getline(stream, line, ',');
			int wins = std::stoi(line);

			std::getline(stream, line, ',');
			int losses = std::stoi(line);

			std::getline(stream, line, ',');
			int ties = std::stoi(line);
			
			std::getline(stream, line, ',');
			double win_percent = stod(line);

			std::getline(stream, line, ',');
			int points_for = std::stoi(line);

			std::getline(stream, line, ',');
			int points_against = std::stoi(line);

			std::getline(stream, line, ',');
			int points_differential = std::stoi(line);

			std::getline(stream, line, ',');
			double margin = std::stod(line);

			std::getline(stream, line, ',');
			bool won_division = (line == "TRUE" || line == "true" || line == "1");

			std::getline(stream, line);
			bool wildcard = (line == "TRUE" || line == "true" || line == "1");

			teams[i] = team(name, wins, losses, ties, win_percent, points_for, points_against, points_differential, margin, won_division, wildcard);
		}
		std::cout << "Done!\n" << std::endl;

		stream.close();
	}
	else
	{
		std::cout << "Failed to open file." << std::endl;
	}

	return teams;
}

int main()
{
	std::string path = "NFL-2018-Standings.csv";

	team* teams = read_teams_from_file(path);

	//Task 3/4
	std::cout << "Sorting Data..." << std::endl;

	for (int i = 0; i < 31; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < 32; j++)
		{
			if (teams[j].get_wins() > teams[min_index].get_wins()) //Sorting by most wins to least wins
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			team temp = teams[i];
			teams[i] = teams[min_index];
			teams[min_index] = temp;
		}
	}
	
	std::cout << "Done!\n" << std::endl;

	for (int i = 0; i < 32; i++)
	{
		teams[i].print();
	}

	//Task 4/4
	std::ofstream stream;
	stream.open("NFL-2018-Standings-Sorted.csv");

	std::cout << "Writing data to CSV file..." << std::endl;

	if (stream.is_open())
	{
		stream << "Team,Wins,Losses,Ties,Win/Loss Percent,Points For,Points Against,Points Differential,Margin of Victory,Won Division,Wildcard" << std::endl;
		
		for (int i = 0; i < 32; i++)
		{
			stream << teams[i].get_name() << "," << teams[i].get_wins() << "," << teams[i].get_losses() << "," << teams[i].get_ties() << "," << teams[i].get_win_percent() << ","
				<< teams[i].get_points_for() << "," << teams[i].get_points_against() << "," << teams[i].get_points_differential() << "," << teams[i].get_margin() << ","
				<< teams[i].get_won_division() << "," << teams[i].get_wildcard() << std::endl;
		}
		std::cout << "Done!" << std::endl;
	}
	else
	{
		std::cout << "Could not write to file." << std::endl;
	}

	delete[] teams;

	return 0;
}
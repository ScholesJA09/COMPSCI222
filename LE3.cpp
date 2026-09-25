#include <iostream>
#include <string>
#include <fstream>
#include "movie2.h"

//Task 1/4
void no_file()
{
	std::cout << "File does not exist." << std::endl;
	throw std::exception("File does not exist.");
}

int get_line_count(const std::string& path)
{
	std::ifstream stream;
	stream.open(path);

	int count = 0;

	if (!stream.is_open())
	{
		no_file();
	}
	else
	{
		std::string line;
		while (std::getline(stream, line))
		{
			count++;
		}

		stream.close();
	}

	return count;
}


movie* read_movies_from_file(const std::string& path, int count)
{
	movie* movies = new movie[count];

	std::ifstream stream;
	stream.open(path);

	if (stream.is_open())
	{
		std::string line;
		std::getline(stream, line);

		for (int i = 0; i < count; i++)
		{
			std::getline(stream, line, ',');
			std::string title = line;

			std::getline(stream, line, ',');
			std::string director_last = line;

			std::getline(stream, line, ',');
			std::string director_first = line;

			std::getline(stream, line, ',');
			int year = std::stoi(line);

			std::getline(stream, line);
			double rating = std::stod(line);

			movies[i] = movie(year, rating, title, (director_first + " " + director_last));
		}

		stream.close();
	}

	return movies;
}

void write_movies_to_new_file(const std::string& path, const movie* movies, int count)
{
	std::ofstream stream;
	stream.open(path);

	stream << "Title,Director Last Name,Director First Name,Year,Rating\n";

	for (int i = 0; i < count; i++)
	{
		stream << movies[i].get_title() << ","
			<< movies[i].get_director() << ","
			<< movies[i].get_year() << ","
			<< movies[i].get_rating() << "\n";
	}

	stream.close();
}

int main()
{
	std::string path = "movies-007.csv";

	int num_movies = get_line_count(path) - 1;

	movie* movies = read_movies_from_file(path, num_movies);

	//Task 2/4
	for (int i = 0; i < num_movies; i++)
	{
		movies[i].print();
	}

	//Task 3/4
	for (int i = 0; i < num_movies - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < num_movies; j++)
		{
			if (movies[j].get_rating() > movies[min_index].get_rating())
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			movie temp = movies[i];
			movies[i] = movies[min_index];
			movies[min_index] = temp;
		}

	}

	std::cout << std::endl;
	for (int i = 0; i < num_movies; i++)
	{
		movies[i].print();
	}

	//Task 4/4
	std::string path2 = "movies-007-sorted.csv";
	write_movies_to_new_file(path2, movies, num_movies);

	delete[] movies;

	return 0;
}
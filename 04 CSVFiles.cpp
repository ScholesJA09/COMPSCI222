#include <iostream>
#include <string>
#include <fstream>
#include "album.h"

int get_line_count(const std::string& path)
{
	std::ifstream stream;
	stream.open(path);

	int count = 0;

	if (stream.is_open()) //Checks that file is open
	{
		std::string line;
		while (std::getline(stream, line)) //Will run as long as it reads a line from file
		{
			count++;
		}

		stream.close();
	}

	return count;
}

album* read_albums_from_file(const std::string path, int count)
{
	album* albums = new album[count];

	std::ifstream stream;
	stream.open(path);

	if (stream.is_open())
	{
		std::string line;
		std::getline(stream, line); //Skipped one line (Header)

		for (int i = 0; i < count; i++)
		{
			std::getline(stream, line, ','); //Stop if it sees ","
			int rank = std::stoi(line);

			std::getline(stream, line, ',');
			int year = std::stoi(line);

			std::getline(stream, line, ',');
			std::string title = line;

			std::getline(stream, line, ',');
			std::string artist = line;

			std::getline(stream, line);
			std::string genre = line;

			albums[i] = album(title, artist, rank, year, genre);
		}

		stream.close();
	}

	return albums;
}

int main()
{
	std::string path = "Rolling-Stone-Top-500-Albums.csv";

	int num_albums = get_line_count(path) - 1; //-1 because of header row

	album* albums = read_albums_from_file(path, num_albums);

	std::cout << "---Top " << num_albums << " Albums---" << std::endl;
	for (int i = 0; i < num_albums; i++)
	{
		albums[i].print();
	}

	delete[] albums;

	return 0;
}
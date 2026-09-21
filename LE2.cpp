#include <iostream>
#include <string>
#include <iomanip>
#include "movie.h"

//Task 2/2
int main()
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "How many movies would you like to log? ";
	std::string movies_str;
	std::getline(std::cin, movies_str);
	int movies = stoi(movies_str);

	std::cout << "OK, please tell me about your top " << movies << " favorite movies!" << std::endl;

	movie* movie_array = new movie[movies];

	for (int i = 0; i < movies; i++)
	{
		std::cout << "Title: ";
		std::string title_str;
		std::getline(std::cin, title_str);

		std::cout << "Director: ";
		std::string director_str;
		std::getline(std::cin, director_str);

		std::cout << "Year: ";
		std::string release_str;
		std::getline(std::cin, release_str);
		int release = stoi(release_str);

		std::cout << "Rating: ";
		std::string rating_str;
		std::getline(std::cin, rating_str);
		double rating = stod(rating_str);

		movie_array[i] = movie(title_str, director_str, release, rating);
		std::cout << "\n";
	}

	std::cout << "Your Top " << movies << " Movies Are:\n" << std::endl;

	for (int i = 0; i < movies; i++)
	{
		movie_array[i].print();
	}

	delete[] movie_array;

	return 0;
}
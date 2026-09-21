//Task 1/2
#pragma once
#include <string>

class movie
{
	std::string title;
	std::string director;
	int release;
	double rating;

public:
	movie();
	movie(const std::string& title, const std::string director, int release, double rating);

	std::string get_title();
	std::string get_director();
	int get_release();
	double get_rating();

	void set_title(const std::string& title);
	void set_director(const std::string& director);
	void set_rating(double rating);

	void print();
};
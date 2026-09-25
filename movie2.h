#pragma once
#include <string>

class movie {
private:
	int year;
	double rating;
	std::string title;
	std::string director;

public:
	movie();
	movie(int year, double rating, const std::string& title, const std::string& director);

	int get_year() const;
	double get_rating() const;
	std::string get_title() const;
	std::string get_director() const;

	void print() const;
};
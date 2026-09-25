#include "movie2.h"
#include <iomanip>
#include <iostream>

movie::movie() {
	year = 2000;
	rating = 0.0;
	title = "Untitled";
	director = "Unknown";
}

movie::movie(int year, double rating, const std::string& title, const std::string& director) {
	if (year < 1900 || year > 2100) {
		throw std::exception("Year out of range");
	}

	if (rating < 0.0 || rating > 10.0) {
		throw std::exception("Rating must be between 0.0 and 10.0");
	}

	if (title.empty()) {
		throw std::exception("Title cannot be empty");
	}

	if (director.empty()) {
		throw std::exception("Director cannot be empty");
	}

	this->year = year;
	this->rating = rating;
	this->title = title;
	this->director = director;
}

int movie::get_year() const {
	return year;
}

double movie::get_rating() const {
	return rating;
}

std::string movie::get_title() const {
	return title;
}

std::string movie::get_director() const {
	return director;
}

void movie::print() const {
	std::cout << title
		<< " by "
		<< director
		<< " ("
		<< year
		<< ") rated "
		<< std::fixed << std::setprecision(2) << rating
		<< " / 5 stars"
		<< std::endl;
}
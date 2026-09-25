#include <iostream>
#include "album.h"

album::album() {
	title = "Untitled";
	artist = "Unknown Artist";
	rank = 1;
	year = 2000;
	genre = "Unknown Genre";
}

album::album(const std::string& title, const std::string& artist, int rank, int year, const std::string& genre) {
	this->title = title;
	this->artist = artist;
	this->rank = rank;
	this->year = year;
	this->genre = genre;
}

std::string album::get_title() const {
	return title;
}

std::string album::get_artist() const {
	return artist;
}

int album::get_rank() const {
	return rank;
}

int album::get_year() const {
	return year;
}

std::string album::get_genre() const {
	return genre;
}

void album::set_title(const std::string& title) {
	if (title.empty()) {
		throw new std::exception("Title cannot be empty");
	}

	this->title = title;
}

void album::set_artist(const std::string& artist) {
	if (artist.empty()) {
		throw new std::exception("Artist cannot be empty");
	}

	this->artist = artist;
}

void album::set_rank(int rank) {
	if (rank < 0) {
		throw new std::exception("Rank cannot be negative");
	}

	this->rank = rank;
}

void album::set_year(int year) {
	if (year < 1900 || year > 2100) {
		throw new std::exception("Year out of range");
	}

	this->year = year;
}

void album::set_genre(const std::string& genre) {
	if (genre.empty()) {
		throw new std::exception("Genre cannot be empty");
	}

	this->genre = genre;
}

void album::print() const {
	std::cout << "#" << rank << ":\t"
		<< title << " by " << artist
		<< " (" << year << ")"
		<< " [" << genre << "]"
		<< std::endl;
}
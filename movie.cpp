#include "movie.h"
#include <iostream>

movie::movie() : movie("Unknown", "Unknown", 2026, 0) {}

movie::movie(const std::string& title, const std::string director, int release, double rating)
{
	set_title(title);
	set_director(director);

	if (release < 1900 || release > 2026)
	{
		throw std::exception("Release year must be between 1900 and 2026.");
	}
	this->release = release;

	set_rating(rating);
}

std::string movie::get_title()
{
	return title;
}

std::string movie::get_director()
{
	return director;
}

int movie::get_release()
{
	return release;
}

double movie::get_rating()
{
	return rating;
}

void movie::set_title(const std::string& title)
{
	if (title.empty())
	{
		throw std::exception("Title cannot be empty.");
	}
	this->title = title;
}

void movie::set_director(const std::string& director)
{
	if (director.empty())
	{
		throw std::exception("Director cannot be empty");
	}
	this->director = director;
}

void movie::set_rating(double rating)
{
	if (rating < 0.0 || rating > 5.0)
	{
		throw std::exception("Rating must be between 0 and 5.");
	}
	this->rating = rating;
}

void movie::print()
{
	std::cout << title << " by " << director << " (" << release << ") [" << rating << " / 5.0]" << std::endl;
}
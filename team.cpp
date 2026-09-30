#include "team.h"
#include <iostream>
#include <string>

team::team() : team("Unknown", 0, 0, 0, 0.0, 0, 0, 0, 0.0, false, false) {}

team::team(const std::string& name, int wins, int losses, int ties, double win_percent, int points_for, int points_against, int points_differential, double margin, bool won_division, bool wildcard)
{
	this->name = name;
	this->wins = wins;
	this->losses = losses;
	this->ties = ties;
	this->win_percent = win_percent;
	this->points_for = points_for;
	this->points_against = points_against;
	this->points_differential = points_differential;
	this->margin = margin;
	this->won_division = won_division;
	this->wildcard = wildcard;
}

std::string team::get_name()
{
	return name;
}

int team::get_wins()
{
	return wins;
}

int team::get_losses()
{
	return losses;
}

int team::get_ties()
{
	return ties;
}

double team::get_win_percent()
{
	return win_percent;
}

int team::get_points_for()
{
	return points_for;
}

int team::get_points_against()
{
	return points_against;
}

int team::get_points_differential()
{
	return points_differential;
}

double team::get_margin()
{
	return margin;
}

bool team::get_won_division()
{
	return won_division;
}

bool team::get_wildcard()
{
	return wildcard;
}

void team::print()
{
	std::cout << "In 2018, the " << name << " had a record of " << wins << "-" << losses << "-" << ties << " (" << win_percent
		<< "). \nPoints Scored: " << points_for << " Points Against: " << points_against << " Point Differential: " << points_differential << " Margin: " << margin
		<< "\nWon Division: " << won_division << " Made Wildcard: " << wildcard << "\n" << std::endl;
}
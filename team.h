//Task 1/4
#pragma once
#include <string>

class team
{
	std::string name;
	int wins;
	int losses;
	int ties;
	double win_percent;
	int points_for;
	int points_against;
	int points_differential;
	double margin;
	bool won_division;
	bool wildcard;

public:
	team();
	team(const std::string& name, int wins, int losses, int ties, double win_percent, int points_for, int points_against, int points_differential, double margin, bool won_division, bool wildcard);

	std::string get_name();
	int get_wins();
	int get_losses();
	int get_ties();
	double get_win_percent();
	int get_points_for();
	int get_points_against();
	int get_points_differential();
	double get_margin();
	bool get_won_division();
	bool get_wildcard();

	void print();
};
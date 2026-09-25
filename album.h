#pragma once
#include <string>

class album {
private:
	std::string title;
	std::string artist;
	int rank;
	int year;
	std::string genre;

public:
	album();
	album(const std::string& title, const std::string& artist, int rank, int year, const std::string& genre);

	std::string get_title() const;
	std::string get_artist() const;
	int get_rank() const;
	int get_year() const;
	std::string get_genre() const;

	void set_title(const std::string& title);
	void set_artist(const std::string& artist);
	void set_rank(int rank);
	void set_year(int year);
	void set_genre(const std::string& genre);

	void print() const;
};
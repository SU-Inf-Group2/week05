#pragma once

class Movie
{
	char* name;
	char* director;
	unsigned int lenght;
public:
	Movie();
	Movie(char* name, char* director, unsigned int lenght);
	Movie(const Movie& other);
	Movie& operator=(const Movie& other);
	~Movie();

	void print() const;
};
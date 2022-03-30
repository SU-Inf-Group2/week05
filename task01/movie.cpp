#include <cstring>
#include <iostream>
#include "movie.h"

Movie::Movie() : name(nullptr), 
                 director(nullptr), 
                 lenght(0) {}

Movie::Movie(char* name, char* director,
             unsigned int lenght)
  : lenght(lenght)
{
	this->name = new char[sizeof(name)+1];
	strcpy(this->name, name);
	this->director = new char[sizeof(director)+1];
	strcpy(this->director, director);
}

Movie::Movie(const Movie& other)
: Movie(other.name, other.director, other.lenght)
{}

Movie& Movie::operator=(const Movie& other)
{
	if(this != &other)
	{
		delete[] name;
		delete[] director;

		this->name = new char[sizeof(other.name)+1];
		strcpy(this->name, other.name);
		this->director = new char[sizeof(other.director)+1];
		strcpy(this->director, other.director);

		this->lenght = other.lenght;		
	}

	return *this;
}

Movie::~Movie()
{
	delete[] name;
	delete[] director;
}

void Movie::print() const
{
	std::cout << "Movie name: " << name << std::endl;
	std::cout << "Directed by: " << director << std::endl;
	std::cout << "Movie lenght: " << lenght << std::endl;
}
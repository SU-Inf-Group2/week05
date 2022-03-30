#include <iostream>
#include "movie.h"

using namespace std;

int main()
{
	Movie my_movie("Matricata", "Pesho", 100);
	Movie new_movie("Alabala", "Sasho", 200);

	my_movie.print();
	my_movie = new_movie;
	my_movie.print();
	
	
	return 0;
}
#pragma once
#include <string>
class Pokemon
{
public:
	Pokemon();
	~Pokemon();
public:
	int gen;
	std::string nombre;
	int nacional;
	Pokemon::Pokemon(int generacion, int numnacional, std::string nombre);
};


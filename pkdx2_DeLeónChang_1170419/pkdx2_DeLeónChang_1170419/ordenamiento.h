#pragma once
#pragma once
#include "Pokemon.h"
#include <string>

class ordenamiento
{
	/*
	ordenamiento();
	~ordenamiento();
	*/
public:
	Pokemon arr[70];
	Pokemon* bubbleSort(Pokemon arr[], int num);
	Pokemon* quickSort(Pokemon arr[], int inicio, int fin);
	Pokemon* stupidSort(Pokemon arr[], int inicio, int fin);
	int Separar(Pokemon arr[], int inicio, int fin);
	/*bool isSorted(int a[], int n)

	*/
};


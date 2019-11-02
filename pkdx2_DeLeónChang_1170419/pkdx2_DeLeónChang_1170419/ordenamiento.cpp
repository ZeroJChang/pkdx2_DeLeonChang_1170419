#include "ordenamiento.h"


Pokemon arr[70];

//JUAN SOLIS
//GITHUB
//STACKOVERFLOW
Pokemon* ordenamiento::bubbleSort(Pokemon arr[], int num) { 
	int aux, i, j;
	Pokemon Paux;

	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (arr[i].nacional > arr[j].nacional)
			{
				aux = arr[i].nacional;
				Paux = arr[i];
				arr[i].nacional = arr[j].nacional;
				arr[i] = arr[j];
				arr[j] = Paux;
			}
		}
	}	return arr;
}

int ordenamiento::Separar(Pokemon arr[], int inicio, int fin) {
	int left;
	int right;
	int pivot;
	int temp;
	Pokemon leftPok;
	Pokemon rightPok;
	Pokemon pivotPok;
	Pokemon tempPok;
	pivot = arr[inicio].nacional;
	pivotPok = arr[inicio];
	left = inicio;
	right = fin;
	while (left < right)
	{
		while (arr[right].nacional > pivot)
		{
			right--;
		}
		while ((left < right) && (arr[left].nacional <= pivot))
		{
			left++;
		}
		if (left < right)
		{
			temp = arr[left].nacional;
			tempPok = arr[left];
			arr[left].nacional = arr[right].nacional;
			arr[left] = arr[right];
			arr[right].nacional = temp;
			arr[right] = tempPok;
		}
	}
	temp = arr[right].nacional;
	tempPok = arr[right];
	arr[right].nacional = arr[inicio].nacional;
	arr[right] = arr[inicio];
	arr[inicio].nacional = temp;
	arr[inicio] = tempPok;
	return right;
}
Pokemon* ordenamiento::quickSort(Pokemon arr[], int inicio, int fin) {
	int pivot;
	if (inicio < fin)
	{
		pivot = Separar(arr, inicio, fin);
		quickSort(arr, inicio, pivot - 1);
		quickSort(arr, pivot + 1, fin);
	}
	return arr;
}

/*
Pokemon* ordenamiento::stupidSort(Pokemon arr[], int inicio, int fin) {
// if array is not sorted then shuffle
	// the array again
	while (!isSorted(inicio, fin))
		shuffle(inicio, fin);

}



/*
ordenamiento::ordenamiento()
{
}


ordenamiento::~ordenamiento()
{

}*/

/*



// To check if array is sorted or not 
bool isSorted(int inicio, int fin)
{
	while (--fin > 1)
		if (inicio[fin] < inicio[fin - 1])
			return false;
	return true;
}

// To generate permuatation of the array 
void shuffle(int inicio, int fin)
{
	for (int i = 0; i < fin; i++)
		swap(inicio, inicio[rand() % fin]);
}
*/
// Sorts array a[0..n-1] using Bogo sort 
//inicial xd el mero mero
/*void bogosort(int a[], int n)
{
	// if array is not sorted then shuffle 
	// the array again 
	while (!isSorted(a, n))
		shuffle(a, n);
}
void Bogosort(int inicio, int fin)
{
	// if array is not sorted then shuffle
	// the array again
	while (!isSorted(fin, inicio))
		shuffle(fin, inicio);
}

*/
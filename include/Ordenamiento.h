#include <iostream>
#include <stdlib.h>
#include <vector>


class Ordenamiento
{
public:

	Ordenamiento ();
	Ordenamiento (int dato);
	std::vector<int> Bubblesort(std::vector<int> l);
	std::vector<int> Insercion(std::vector<int> l);
	int Menor(std::vector<int> l, int i);
	std::vector<int> MergeSort(std::vector<int> l);
	std::vector<int> Merge(std::vector<int> l1,std::vector<int> l2);
	std::vector<int> Seleccion(std::vector<int> l);
	void Split(std::vector<int> l,int t,std::vector<int> l1,std::vector<int> l2);
};
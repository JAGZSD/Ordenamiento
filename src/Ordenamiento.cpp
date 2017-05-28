#include "Ordenamiento.h"

std::vector<int> Ordenamiento::Bubblesort(std::vector<int> l)

{
  int j,i,aux;

  for (i=0;i<l.size();++i)
    for (j=0;j<l.size()-1-i;++j)
    {
      if (l[j]>l[j+1])
      {
	aux = l[j];
	l[j]=l[j+1];
	l[j+1]=aux;
      }
    }
  return l;
}


std::vector<int>  Ordenamiento::Insercion(std::vector<int> l)
{
  int i,j,aux;
    for (i=1;i<l.size();++i)
    {
      aux=l[i];
      j=i-1;
      
	while(j>=0 && aux<l[j])
	{
	  l[j+1]=l[j];
	  --j;
	}
	l[j+1]=aux;

    }    
    return l;
}

std::vector<int> Ordenamiento::MergeSort(std::vector<int> l)
{
  int t=l.size()/2;
  std::vector<int> l1;
  std::vector<int> l2;
  
  Split (l,t,l1,l2);
  
    if (l2.size()!=1)
      l2=MergeSort(l2);
    if (l1.size()!=1)
      l1=MergeSort(l1);
    
    return Merge(l1,l2);
}


std::vector<int> Ordenamiento::Seleccion(std::vector<int> l)
{
	int aux;
	for (int i=0; i<l.size(); ++i)
	{
		int idx_men=Menor(l,i);
		if(idx_men!=i){
			aux=l[i];
			l[i]=l[idx_men];
			l[idx_men]=aux;
		}
	}
	return l;
}


int Ordenamiento::Menor(std::vector<int> l, int i)
{
    int j;
    int aux=l[i];
    int index=i;
      for (j=i+1;j<l.size();++j)
      {
	 if(aux>l[j])
	 {
	   aux=l[j];
	   index=j;
	 }
      }
      return index;
}


std::vector<int> Ordenamiento::Merge(std::vector<int> l1,std::vector<int> l2)
{
	int i=0,j=0,aux=0,a;
	std::vector<int> l;
	while(i<l1.size() && j<l2.size()){
		if (l1[i]>l[j])
		{
			l[aux]=l2[j];
			++j;
		}else{
			l[aux]=l1[i];
			++i;
		}
		++aux;
	}

	aux=0;
	if (i==l1.size())
		for (a=j; a<l2.size(); ++a){
			l[aux]=l2[a];
			++aux;
		}
	else
		for (a=0; a<l1.size(); ++a)
		{
			l[aux]=l1[a];
			++aux;
		}
	return l;
}


void Ordenamiento::Split(std::vector<int> l,int t,std::vector<int> l1,std::vector<int> l2)
{

	int aux1=0,aux2=0,j;
	for (j=0; j<l.size(); j++)
		if (j<t){
			l1[aux1]=l[j];
			aux1++;
		}else{
			l2[aux2]=l[j];
			aux2++;
		}
}

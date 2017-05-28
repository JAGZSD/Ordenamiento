#include "Ordenamiento.h"

int main()
{
  
menu:
	int opc,g;


system("clear");
std::cout<<"Ingresa la opcion que quieras: \n\n  "<<std::endl;
std::cout<<"Opcion 1: Bubble Sort "<<std::endl;
std::cout<<"Opcion 2: Inserccion "<<std::endl;
std::cout<<"Opcion 3: Seleccion "<<std::endl;
std::cout<<"Opcion 4: Merge Sort "<<std::endl;
std::cout<<"Opcion 5: Salir \n"<<std::endl;
std::cin>> opc ; 


switch(opc){
	case 1:
		std::cout<<"Introduce la lista:"<<std::endl;
		//std::vector<int> dato;
		//o.Bubblesort(dato);
		break;
	case 2:
		std::cout<<"Introduce la lista:"<<std::endl;
		//std::vector<int> dato;
		//o.Inserccion(dato);
		break;
	case 3:
		std::cout<<"Introduce la lista:"<<std::endl;
		//std::vector<int> dato;
		//o.Seleccion(dato);
		break;
	case 4:
		std::cout<<"Introduce la lista:"<<std::endl;
		//std::vector<int> dato;
		//o.Mergesort(dato);
		break;
	case 5:
		return 0;
		break;
	default:
	std::cout<<"Opcion Invalida"<<std::endl;
	break;
}

std::cout<<"Deseas repetir el programa si=1 no=0 "<<std::endl;
std::cin>>g;

if (g==1)
    goto menu;

return 0;

}

//Busqueda binaria

#include<iostream>

using namespace std;

int main(){
	
	int num[]={1,2,3,4,5};
	int inf, sup, mitad, dato;
	char band='F';
	
	dato=4;
	inf=0;
	sup=5;
	
	while (inf<=sup) {
		mitad=(inf+sup)/2;
		
		if (num[mitad] == dato) {
			band='V';
			break;
		}
		
		if (num[mitad]>dato) {
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		
		if (num[mitad]<dato) {
			inf=mitad;
			mitad=(inf+sup)/2;
		}
		
		
		
	}
	
	if (band == 'V') {
		cout<<"El número ha sido encontrado en la posición: "<<mitad;
	} else {
		cout<<"El número no ha sido encontrado";
	}
	
	return 0;
}
























//Busqueda secuencial

#include<iostream>

using namespace std;

int main(){
	
	int a[]={3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	i=0;
	dato=5;
	while ((band == 'F') && (i<5)) {
		if (a[i] == dato) {
			band='V';
		}
		i++;
	}
	
	if (band == 'F') {
		cout<<"El número a buscar no existe en el arreglo"<<endl;
		
	} else {
		cout<<"El número ha sido encontrado en la posición: "<<i-1<<endl;
	}
	
	
	
	
	return 0;
}






















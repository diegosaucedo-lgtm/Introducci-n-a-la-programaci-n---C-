
/*

Asignacion dinamica de arreglos

new: reserva el número de bytes solicitado por la declaracion
delete: libera un bloque de bytes reservado con anterioridad

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico




*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
	
	pedirNotas();
	
	mostrarNotas();
	
	delete[] calif; //liberando el espacio en bytes usados anteriormente
	
	return 0;
}

void pedirNotas() {
	
	cout<<"Digite el número de calificaciones: "<<endl;
	cin>>numCalif;
	
	calif = new int[numCalif]; //Crear arreglo
	
	for (int i=0; i<numCalif; i++) {
		cout<<"Ingresa una nota: "<<endl;
		cin>>calif[i];
	}
	
}

void mostrarNotas() {
	cout<<"\nMostrando notas del usuario: "<<endl;
	
	for(int i=0; i<numCalif; i++) {
		
		cout<<"Nota "<<i<<" : "<<calif[i]<<endl;
	}
}



















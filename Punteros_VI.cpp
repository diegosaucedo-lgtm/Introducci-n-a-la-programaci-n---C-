/*

Matrices dinamicas

Ejemplo: rellenar una matriz de NxM y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int]


*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nColumnas;

int main(){
	
	pedirDatos();
	mostrarMatriz(puntero_matriz, nFilas, nColumnas);
	
	for (int i=0; i<nFilas; i++) {
		
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	return 0;
}
	
	void pedirDatos() {
		
		cout<<"Digite el número de fila: "<<endl;
		cin>>nFilas;
		cout<<"Digite el número de columnas: "<<endl;
		cin>>nColumnas;
		
		puntero_matriz = new int*[nFilas]; //Reservando memrorias para las filas
		
		for(int i=0; i<nFilas; i++){
			puntero_matriz[i] = new int[nColumnas]; //Reservando memoria para las columnas
			
		}
		
		
		cout<<"Digitando elementos de la matriz: "<<endl;
		for (int i=0; i<nFilas; i++) {
			for (int j=0; j<nColumnas; j++) {
				cout<<"Digite un número ["<<i<<","<<j<<"]: ";
				cin>>*(*(puntero_matriz+i)+j); // puntero_matriz[i][j]
			}
		}
			
		
	}
	

void mostrarMatriz(int **puntero_matriz, int nFilas, int nColumnas) {
	
	cout<<"\n\nImprimiendo matriz: \n";
	
	for(int i=0; i<nFilas; i++) {
		for(int j=0; j<nColumnas; j++) {
			cout<<*(*(puntero_matriz+i)+j);
		}
		cout<<"\n";
	}
	
	
	
}

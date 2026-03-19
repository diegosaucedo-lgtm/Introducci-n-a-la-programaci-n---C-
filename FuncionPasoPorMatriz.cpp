
//Paso de parametro de una matriz

#include<iostream>

using namespace std;

//Nos obliga a poner el numero de columnas max
void mostrarMatriz(int m[][3], int , int);

int main(){
	
	const int nfilas=2;
	const int ncol=3;
	int m[nfilas][ncol]={{1,2,3},{4,5,6}};
	
	mostrarMatriz(m, nfilas, ncol);
	
	return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol) {
	
	for(int i=0; i<nfilas; i++) {
		for(int j=0; j<ncol; j++) {
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}














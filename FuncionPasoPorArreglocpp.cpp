
//Paso de parametros por arreglo

#include<iostream>

using namespace std;

void cuadrado(int vec[], int tam);
void mostrarArreglo(int vec[], int tam);



int main(){
	
	//Constante que no varia
	const int tam=5;
	int vec[tam]={1,2,3,4,5};
	
	cuadrado(vec, tam);
	
	mostrarArreglo(vec, tam);

	
	
	
	
	return 0;
}


 void cuadrado(int vec[], int tam) {
	 
	 for (int i=0; i<5; i++) {
		 
		 vec[i]=vec[i]*vec[i];
		 
	 }
 }

 void mostrarArreglo(int vec[], int tam) {
	 
	 for (int i=0; i<5; i++) {
		 
		 cout<<vec[i]<<" ";
	 }
	 
	 
 }












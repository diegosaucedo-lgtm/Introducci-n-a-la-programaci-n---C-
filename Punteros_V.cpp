
/*

Transmicion de arreglos

Ejemplo:  Hallar el máximo elemento de un arreglo

*/


#include<iostream>

using namespace std;

int hallarMax(int *, int);

int main(){
	
	const int nELementos = 5;
	
	int num[nELementos] = {3,5,2,8,1};
	
	cout<<"El mayor elemento es "<<hallarMax(num, nELementos);
	
	
	
	return 0;
}

int hallarMax(int *dirVec, int nELementos) {
	
	int max=0;
	
	for(int i=0; i<nELementos; i++) {
		
		if (*(dirVec+i)>max) {
			
			max=*(dirVec+i);
			
		}
	}
	
	return max;
}	









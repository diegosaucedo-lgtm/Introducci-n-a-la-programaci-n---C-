
//Funcion recursividad


#include<iostream>

using namespace std;

int sumar(int);

int main(){
	
	int nElementos;
	
	do {
		
		cout<<"Digite el número de elementos: "; cin>>nElementos;
		
	} while (nElementos<=0);
	
	cout<<"\nLa suma es "<<sumar(nElementos);
	
	return 0;
}

	int sumar(int n) {
		
		int suma=0;
		
		if (n==1){
			suma=1;
		} else {
			suma=n+sumar(n-1);
		}
		
		return suma;
	}














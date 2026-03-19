
//Funciones

#include<iostream>

using namespace std;

//Prototipo
int encontrarMax(int x, int y);

int main(){
	
	int n1, n2;
	int mayor;
	
	cout<<"Digite dos números: "<<endl;
	cin>>n1;
	cin>>n2;
	
	mayor=encontrarMax(n1,n2);
	
	cout<<"El número mayor es "<<mayor;
		
		
	
	return 0;
}

//Definicion
int encontrarMax(int x, int y){
		
		int numMax;
		
		if (x>y) {
			numMax=x;
		}
		
		if (y>x) {
			numMax=y;
		}
		
		return numMax;
}	






















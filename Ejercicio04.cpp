
#include<iostream>
//Libreria matematica y trigonometrica
#include<math.h>

using namespace std;

int main() {
	
	float x, y, resultado = 0;
	
	cout<<"Raiz cuadrada"<<endl;
	cout<<"Digita el valor de x: "<<endl; cin>>x;
	cout<<"Digite el valor de y: "<<endl; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es "<<resultado;
	
	
	
	return 0;
}






















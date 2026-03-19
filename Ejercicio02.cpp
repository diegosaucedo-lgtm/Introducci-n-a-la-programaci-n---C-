

#include<iostream>

using namespace std;

int main () {
	float a, b, resultado = 0;
	
	cout<<"Digite el valor de a: "<<endl; cin>>a;
	cout<<"Digite el valor de b: "<<endl; cin>>b;
	
	resultado=(a/b)+1;

	cout.precision(2); //Redondea el numero -> # de decimales para hacerlo
	cout<<"El resultado es "<<resultado;
	

	return 0;
}






























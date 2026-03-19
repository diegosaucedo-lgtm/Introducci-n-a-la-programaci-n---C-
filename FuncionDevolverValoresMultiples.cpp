
//Devolver valores multiples

#include<iostream>

using namespace std;

void calcular(int, int, int&, int&);

int main(){
	
	int num1, num2, suma, producto;
	
	cout<<"Digite 2 números: "<<endl;
	cin>>num1;
	cin>>num2;
	
	calcular(num1, num2, suma, producto);
	
	
	cout<<"La suma es "<<suma<<endl;
	cout<<"La multiplicación es "<<producto<<endl;
	
	return 0;
}

void calcular(int num1, int num2, int& suma, int& producto) {
	
	suma=num1+num2;
	producto=num1*num2;
	
}

















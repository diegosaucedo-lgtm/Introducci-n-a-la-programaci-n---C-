
#include<iostream>

using namespace std;

int main(){
	
	int num;
	
	cout<<"Condicionales anidados"<<endl;
	cout<<"Digita un número: "<<endl; cin>>num;
	
	if (num == 0) {
		cout<<"El número es cero";
	} else if (num%2 == 0) {
		cout<<"El número "<<num<<" es par";
	} else {
		cout<<"El número "<<num<<" es impar";
	}
	
	return 0;
}




















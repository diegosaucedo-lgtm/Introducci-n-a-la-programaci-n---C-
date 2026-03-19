

#include<iostream>

using namespace std;

int main() {
	
	int x, y, w=0;
	
	cout<<"Intercambio de variables"<<endl;
	cout<<"Digita el valor de x: "<<endl; cin>>x;
	cout<<"Digita el valor de y: "<<endl; cin>>y;
	
	w=x;
	x=y;
	y=w;
	
	cout<<"\nEl valor de x es "<<x<<endl;
	cout<<"El valor de y es "<<y;
	
		
	return 0;
}




















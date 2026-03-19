
//Convertir un número a romanos


#include<iostream>

using namespace std;

int main(){
	
	int num, u, d, c, m;
	
	cout<<"Digite un número"<<endl; cin>>num;
	
	u=num%10; num/=10;
	cout<<"\nUnidades: "<<u<<" Número: "<<num;
	d=num%10; num/=10;
	cout<<"\nUnidades: "<<d<<" Número: "<<num;
	c=num%10; num/=10;
	cout<<"\nUnidades: "<<c<<" Número: "<<num;
	m=num%10; num/=10;
	cout<<"\nUnidades: "<<m<<" Número: "<<num;

	return 0;
}























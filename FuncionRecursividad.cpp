
//Recursividad


#include<iostream>

using namespace std;

int factorial(int);

int main(){
	
	
	cout<<"Ingresa el factorial: "<<endl;
	cin>>n;
	
	cout<<"El producto factorial es "<<factorial(n);
	
	return 0;
}


int factorial(int n) {
	
	if (n==0) {
		n=1;
	} else {
		n=n*factorial(n-1);
	}
	
	return n;
}

















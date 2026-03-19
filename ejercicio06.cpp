
#include<iostream>

using namespace std;

int main(){
	
	int num[100], n, mayor=0;
	
	cout<<"Digite el número de elementos del arreglo: "<<endl; cin>>n;
	
	cout<<"Ingresa los elementos del arreglo: "<<endl;
	for (int i=0; i<n; i++) {
		
		cout<<i+1<<"° elemento: "; cin>>num[i];
		
		if (num[i]>mayor) {
			mayor=num[i];
		}
		
	}
	
	
	cout<<"El elemento mayor es "<<mayor;
	
	
	return 0;
}






















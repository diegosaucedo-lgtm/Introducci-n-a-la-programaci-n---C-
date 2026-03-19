
//Metodo por seleccion


#include<iostream>

using namespace std;

int main(){
	
	int num[]={3,2,5,1,4};
	int i,j,aux,min;
	
	for (i=0; i<5; i++) {
		min=i;
		for(j=i+1; j<5; j++) {
			if (num[j]<num[min]) {
				min=j;
			}
		}
		
		aux=num[i];
		num[i]=num[min];
		num[min]=aux;
		
	}
	
	
	cout<<"Orden ascendente "<<endl;
	
	for (i=0; i<5; i++) {
		
		cout<<num[i];
	}
	
	
	return 0;
}

















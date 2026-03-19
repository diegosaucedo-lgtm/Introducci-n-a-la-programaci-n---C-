
//Metodo por insercion

#include<iostream>

using namespace std;

int main(){
	
	int num[]={4,2,1,5,3};
	int i, pos, aux;
	
	for(i=0; i<5; i++){
		pos=i;
		aux=num[i];
		
		while ((pos>0) && (num[pos-1]>aux)){
			num[pos]=num[pos-1];
			pos--;
			
		}
		
		num[pos]=aux;
		
	}

	cout<<"Orden ascendente: "<<endl;
	for (i=0; i<5; i++) {
		cout<<num[i];
	}
	
	return 0;
}














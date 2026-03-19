
//Aleatorio

#include<iostream>
#include<stdlib.h>
#include<time.h> //Librería para usar aleatorio

using namespace std;

int main(){
	
	int num, dato, cont=0;
	
	//Formula aleatorio
	//aleatorio = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
	
	srand(time(NULL)); //Genera un número aleatorio
	dato = 1 +rand()%(100+1-1);
	
	do{
		cout<<"Digite un número: "<<endl; cin>>num;
		
		if (num>dato){
			cout<<"\nDigita un número menor\n";
		} else {
			cout<<"\nDigita un número mayor\n";
		}
		
		cont++;
		
	} while(num!=dato);
	
	cout<<"\nAdivinaste el número";
	cout<<"\nNúmero de intentos: "<<cont;
	cout<<"\nEl número aleatorio es "<<dato;
	
	return 0;
}
















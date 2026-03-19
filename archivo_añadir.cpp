//Archivo

#include<iostream>
#include<stdlib.h>
#include<fstream> //archivo


using namespace std;

void aniadir();

int main(){
	
	aniadir();
	
	return 0;
}
	
void aniadir() {
	
	ofstream archivo;
	string texto
		
	
	archivo.open("ejemplo.txt", ios::app); //Abrimos el archivo en modo añadir
	
	if (archivo.fail()) {
		
		cout<<"No se pudo abrir el archivo";
		exit(1);
		
	}
	
	archivo<<"Multa de "<<endl;
	
	cout<<"Digite el texto que desea añadir:"<<endl;
	getline(cin, texto);
	
	archivo<<texto<<endl;
	
	archivo.close();
	
}

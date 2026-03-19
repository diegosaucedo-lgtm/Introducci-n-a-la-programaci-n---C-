
//Archivo

#include<iostream>
#include<stdlib.h>
#include<fstream> //archivo


using namespace std;

void lectura();

int main(){
	
	lectura();
	
	return 0;
}
	
void lectura() {
	
	ifstream archivo;
	string texto;
	
	archivo.open("ejemplo.txt", ios::in); //Abrimos el archivo en modo lectura
	
	
	if (archivo.fail()) {
		
		cout<<"No se pudo abrir el archivo";
		exit(1);
		
	}
	
	while (!archivo.eof()) {//Mientras no sea el final del archivo
		
		getline(archivo, texto);
		cout<<texto<<endl;
		
		
	}
	
	archivo.close();
}















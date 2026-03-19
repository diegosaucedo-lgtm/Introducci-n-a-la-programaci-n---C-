
//Archivo

#include<iostream>
#include<stdlib.h>
#include<fstream> //archivo


using namespace std;

void escribir();

int main(){
	
	escribir();
	
	return 0;
}

void escribir() {
	
	ofstream archivo; //Nombre del archivo o fichero
	string nombreArchivo, frase;
	
	cout<<"Digite el nombre del archivo";
	getline(cin,nombreArchivo); //ejemplo:diego.txt
	
	cout<<"Digite frases del archivo";
	getline(cin,frase);
	
	//archivo.open("d://prueba//ejemplo.txt", ios::out) -> otra ruta
	//archivo.open("prueba.txt", ios::out); //Abrir y crear el achivo
	//Lo hace en la carpeta del mismo cpp
	
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	if (archivo.fail()) {
		
		cout<<"No se pudo abrir el archivo";
		exit(1);
		
	} 
	
	archivo<<"Hola que tal?"<<endl; //Copiar lo en el texto
	archivo<<frase;
	
	archivo.close(); //Cerrar el archivo
	
}























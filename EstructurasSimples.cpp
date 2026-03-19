
//Estructuras -> coleccion de datos de distinto tipo


#include<iostream>

using namespace std;

struct coleccion_cd {
	
	char titulo[30];
	char  artista[25];
	int numCanciones;
	float precio;
	char fecha_compra[20];
	
	
}cd1, cd2, cd3; //Declaracion de las variables 1°

struct persona {
	char nombre[20];
	int edad;
}

persona1={"Diego",30},
persona2={"Maricielo",31},
persona3;

int main(){
	
	struct coleccion_cd cd4, cd5; //Declaracion de las variables 2°
	
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad;
	
	cout<<"\nNombre3: "<<endl;
	cin.getline(persona3.nombre,20,'\n');
	cout<<"\nEl nombre es "<<persona3.nombre;
	
	return 0;
}


















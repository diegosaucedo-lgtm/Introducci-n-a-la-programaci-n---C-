
//Cadenas

#include<iostream>
#include<stdlib.h> //Para atoi(entero) y atof(decimal)
#include<string.h> //Libreria para las cadenas

using namespace std;

int main(){
	
	char palabra[]="Diego";
	char copia[20];
	//char palabra2[]={'D','i','e','g','o'};
	char nombre[30];
	char palabra3[]="Hola";
	int longitud=0, num;
	char concat[30];
	char entr[]="123";
	//char may[]="hola trola";
	//char min[]="HOLA TROLA";
	
	cout<<palabra<<endl;
	//cout<<palabra2<<endl;
	
	//cin -> guarda caracteres hasta que empieza un espacio en blanco
	cout<<"\nDigite su nombre : "; cin.getline(nombre,30,'\n');
	//gets(nombre);//Aumenta los espacios en la cadena nombre
	cout<<"\nNombre: "<<nombre;
	
	//Funcion para contar la longitud de los caracteres
	longitud=strlen(palabra3);
	
	cout<<"\nLa longitud de la palabra "<<palabra3<<" es "<<longitud;
	
	//Copiar una cadena a otra cadena con la funcion
	strcpy(copia,palabra);
	
	cout<<"\nPalabra copiada :"<<copia;
	
	//Compara cadenas
	// avion - becerro -> >0 -> está después alfabeticamente
	if (strcmp(palabra, copia) == 0) {
		cout<<"\nAmbas cadenas son iguales";
	}
	
	//Concatenar cadenas
	strcpy(concat,palabra3);
	strcat(concat,palabra);
	
	cout<<"\nConcatenar cadenas: "<<concat;
	
	//Invertir una cadena
	//strrev(palabra);
	
	//cout<<"\nInversión de cadenas: "<<palabra;
	
	//Pasar a mayuscula
	//strupr(may);
	
	//cout<<"\nA mayusculas: "<<may;
	
	//Pasar a minuscula
	//strlwr(min);
	
	//cout<<"\nA minuscula "<<min;
	
	//Convertir a entero
	num=atoi(entr);
	
	cout<<"\nConversión a entero: "<<num;
	
	return 0;
}





















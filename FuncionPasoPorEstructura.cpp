
//Paso de parámetros de tipo estructura

#include<iostream>

using namespace std;

struct persona {
	char nombre[30];
	int edad;
} p1;

void pedirDatos();
void mostrarDatos(persona);


int main(){
	
	pedirDatos();
	mostrarDatos(p1);
	
	return 0;
}

void pedirDatos() {
	
	cout<<"Digite su nombre: "<<endl;
	cin.getline(p1.nombre, 30, '\n');
	
	cout<<"Digite su edad: "<<endl;
	cin>>p1.edad;
	
	
	
}

void mostrarDatos(persona) {
	
	cout<<"\nNombre: "<<p1.nombre<<endl;
	cout<<"Edad: "<<p1.edad<<endl;
}

























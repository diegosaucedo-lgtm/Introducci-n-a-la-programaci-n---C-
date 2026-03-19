
//Puntero a structura

#include<iostream>


using namespace std;

struct persona {
	char nombre[30];
	int edad;
}pers, *puntero_persona=&pers;

void pedirDatos();
void mostrarDatos(persona *);

int main(){
	
	pedirDatos();
	
	mostrarDatos(puntero_persona);
	
	return 0;
}

	void pedirDatos() {
		
		cout<<"Digite su nombre: "<<endl;
		cin.getline(puntero_persona->nombre,30,'\n');
		
		cout<<"Digite su edad: "<<endl;
		cin>>puntero_persona->edad;
	}


	void mostrarDatos(persona *puntero_persona) {
		
		cout<<"Su nombre es "<<puntero_persona->nombre<<endl;
		cout<<"Su edad es "<<puntero_persona->edad<<endl;
	}














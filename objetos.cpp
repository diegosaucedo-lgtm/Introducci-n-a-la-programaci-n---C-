
//Clases y objetos

#include <iostream>
using namespace std;

//CLASE
class persona {
	
	//Atributos encapsulados
	private: 
		int edad;
		string nombre;
	
	//Metodos
	public:
		
		//Constructor
		persona(int, string);
		
		void leer();
		void correr();
};

//Constructor que inicializa los atributos
persona::persona(int _edad, string _nombre) {
	
	edad = _edad;
	nombre = _nombre;
}

void persona::leer() {
	
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void persona::correr() {
	
	cout<<"Soy "<<nombre<<" y estoy corriendo una maratón"<<endl;
}

int main() {
	
	//Crear objeto
	persona p1 = persona(45,"Diego");
	
	p1.leer();
	
	//Crear objeto
	persona p2(28, "Maria");
	
	p2.correr();
	
	
	return 0;
}


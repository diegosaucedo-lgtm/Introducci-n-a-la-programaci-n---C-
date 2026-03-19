
/*

	Colas -> FIFO -> primero llegar, primero en salir
	Es una estructura de datos, caracterizada por ser una secuencia de 
	elementos en la que la operación de inserción se realiza por un extremo (FINAL) y la 
	extracción por el otro (FRENTE).

	FRENTE ------------------------------------- FINAL

	Las operaciones usuales de las colar son INSERTAR y QUITAR. La operacion INSERTAR
	añade un elemento por el extremo final de la cola, y la operacin QUITAR elimina o extrae
	un elemento por el extremo opuesto.

	Insertar elementos en una cola:
	1. Crear espacio en memoria para almacenar un nodo.
	2. Asignar ese nuevo nodo al dato que queremos insertar.
	3. Asignar los punteros frente y fin hacia el nuevo nodo.

	Eliminar elementos de una cola:
	1. Obtener el valor del nodo-
	2. Crear un nodo aux y asignarle el frente de la cola.
	3. Eliminar el nodo del frente de la cola.

*/


#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

//Funciones para insertar colas
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);

//Funciones para suprimir colas
void suprimirCola(Nodo *&, Nodo *&, int &);

int main(){
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Digita un número: "<<endl;
	cin>>dato;
	
	insertarCola(frente, fin, dato);
	
	
	cout<<"Digita un número: "<<endl;
	cin>>dato;
	
	insertarCola(frente, fin, dato);
	
	cout<<"Elimando los nodos de la cola: ";
	while (frente != NULL ) {
		
		suprimirCola(frente, fin, dato);
		
		if (frente != NULL){
			cout<<dato<<",";
		} else {
			cout<<dato<<".";
		}
	}
	
	
	return 0;
}


void insertarCola(Nodo *&frente, Nodo *&fin, int n) {
	
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato=n;
	nuevo_nodo -> siguiente = NULL;
	
	if (cola_vacia(frente)) {
		frente = nuevo_nodo;
	} else {
		fin->siguiente=nuevo_nodo;
	}
	
	fin=nuevo_nodo;
	
	cout<<"\nElemento "<<n<<" insertado en la cola"<<endl;
}

bool cola_vacia(Nodo *frente) {
	
	return (frente == NULL)? true : false;
/*
	if (frente == NULL) {
		return true;
	} else {
		return false;
	}
	*/
}


void suprimirCola(Nodo *&frente, Nodo *&fin, int &n) {
	
	n = frente->dato;
	Nodo *aux = frente;
	
	if (frente == fin) {
		frente = NULL;
		fin = NULL;
	} else {
		frente = frente-> siguiente;
	}
	
	delete aux;
}








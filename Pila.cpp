
/*
	Pilas -> LIFO -> ultimo que entra, primero que sale
	Es una estructura de datos ordenadas tales que solo se pueden
	introducir y eliminar por un extremo, llamado cima. 

	Las operaciones usuales en la pila son INSERTAR y QUITAR.
	La operacion INSERTAR (push) añade un elemento en la cima de la pila
	y la operación QUITAR (pop) elimina o saca un elemento de la pila.

	Nodo = dato + puntero

	Insertar elementos en la pila:
	
	1. Crear el espacio en memoria para almacenar un nodo.
	2. Cargar el valor dentro del nodo(dato).
	3. Cargar el puntero pila dentro del nodo (*siguiente).
	4. Asignar el nuevo nodo a pila.


	Quitar elementos de una Pila

	1. Crear una variable de *aux de tipo Nodo
	2. Igualar el n a aux->dato
	3. Pasar pila a siguient nodo
	4. Eliminar aux

*/


#include<iostream>
#include<stdlib.h>

using namespace std;

//Estructura nodo
struct Nodo {
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //Prototipo

void sacarPila(Nodo *&, int &); 

int main(){
	
	//Puntero de la pila
	Nodo *pila = NULL;
	
	int dato;
	
	cout<<"Digite un número: "<<endl;
	cin>>dato;
	
	agregarPila(pila, dato);
	
	cout<<"Digite un número: "<<endl;
	cin>>dato;
	
	agregarPila(pila, dato);
	
	cout<<"\nSacando los elementos de la pila: ";
	
	while (pila != NULL) {
		
		sacarPila(pila, dato);
		if(pila != NULL) {
			cout<<dato<<",";
		} else {
			cout<<dato<<".";
		}
	}
	
	
	
	return 0;
}
	
void agregarPila(Nodo *&pila, int n) {
	
	Nodo *nuevo_nodo = new Nodo(); //Crear espacio en memoria para un nuevo nodo
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila; //Direccion de memoria
	
	pila = nuevo_nodo; //Actualizar la direccion de memoria
	
	cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl;
	cout<<pila<<endl;
	
}


void sacarPila(Nodo *&pila, int &n) {
	
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
















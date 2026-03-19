
/*
	Listas enlazada ->  estructura de datos dinámica -> 
	Consta de un número de nodos con dos componentes (campo),
	un enlace al siguiente nodo de la lista y un valor, que puede ser
	de cualquier tipo.
	
	Clasificacion:
	
	1. Listas simplementes enlazadas:
		Cada nodo (elemento)contiene un unico enlace que conecta ese nodo al nodo
		siguiente o nodo sucesor. La lista es eficiente en recorridos directos
		(adelanta)
	2. Listas doblemente enlazadas:
		Cada nodo contiene dos enlaces, uno a su nodo predecesor y el otro
		a su nodo sucesor. La lista es eficiente tanto en recorrido directo
		(adelante) como recorrido inverso (atras)
	3. Lista circular simplemente enlazada:
		Una lista enlazada simplemente en la que el ultimo elemento (cola)
		se enlaza al primer elemento (cabeza) de tal modo que la lista
		puede se recorrida de modo circular (anillo)
	4. Lista circular doblemente enlazada:
		Una lista doblemente enlazada en la que el ultimo elemento se enlaza
		al primer elemento y viceversa. Esta lista se puede recorrer
		de modo circular (en anillo) tanto en direccion directa (adelante) 
		como inversa (atras)

	Operaciones
	
	1. Insertar elementes en una lista
		a. Crear un nuevo nodo
		b. Asignar a nuevo_nodo->dato el elemento que queremos incluir
			a la lista
		c. Crear dos nodos auxiliares y asignar lista al primero de ellos
		d. Insertar el elemento a la lista
	2. Mostrar elementos de una lista enlazada
		a. Crear un nuevo nodo(actual)
		b. Igualar ese nuevo nodo (actual) a lista
		c. Recorrer la lista de inicio a fin
	3. Buscar un elemento en una lista enlazada
		a. Crear un nodo(actual)
		b. Igualar ese nuevo nodo (actual) a la lista
		c. Recorrer lista
		d. Determinar si el elemento existe o no en la lista.
	4. Eliminar un elemento en una lista enlazada
		a. Preguntar si la lista no esta vacia
		b. Crear un *aux_borrar y *anterio=NULL
		c. Igualar *aux_borrar al inicia de la lista.
		d. Recorrer la lista
		e. Eliminar elemnto
	5. Dejar vacia la lista
		a. Crear un nodo *aux e igualarlo al inicio de la lista
		b. Guardar el dato que queremos eleminar dentro de aux

*/

#include<iostream>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

void menu();
void insertarLista (Nodo *&, int);
void mostraLista (Nodo *);
void buscarLista (Nodo*, int);
void eliminarNodo (Nodo *&, int);
void eliminarLista (Nodo *&, int &);
Nodo *lista = NULL;


int main(){
	
	menu();
	
	return 0;
}

void menu() {
	
	int opcion, dato;
	
	do {
		
		cout<<"\t.:Menu:.\n";
		cout<<"1. Inserta elementos a la lista\n";
		cout<<"2. Mostar los elementos de la lista\n";
		cout<<"3. Buscar un elemento en la lista\n";
		cout<<"4. Borrar un elemento de la lista\n";
		cout<<"5. Dejar vacía la lista";
		cout<<"6. Salir\n";
		cout<<"Opción: ";
		cin>>opcion;
		
		switch (opcion) {
		case 1: 
			cout<<"Digite un número"<<endl;
			cin>>dato;
			insertarLista(lista, dato);
			cout<<"\n";
			system("pause");
			break;
		case 2: 
			mostraLista(lista);
			cout<<"\n";
			system("pause");
			break;
			
		case 3:
			cout<<"\nDigite un número a buscar: ";
			cin>>dato;
			buscarLista(lista, dato);
			cout<<"\n";
			system("pause");
			break;
			
		case 4:
			cout<<"\nDigite el número a eliminar: ";
			cin>>dato;
			eliminarNodo(lista, dato);
			cout<<"\n";
			system("pause");
			break;
		case 5:
			
				while (lista != NULL) { //Mientras no sea el final de la lista
					eliminarLista(lista, dato);
					cout<<dato<<" -> ";
			}
			cout<<"\n";
			system("pause");
			
		
		}
		
		system("cls"); //Borrar
		
		
	} while (opcion != 6);
}
	
	
void insertarLista (Nodo *&lista, int n) {
	
	Nodo *nuevo_nodo = new Nodo (); //Reserva memoria
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while ((aux1 != NULL) && (aux1->dato < n)) {
		
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if (lista == aux1) {
		lista = nuevo_nodo;
	} else {
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
	cout<<"\nElemento "<<n<<" insertado a lista correctamente"<<endl;
}

void mostraLista(Nodo *lista){
	
	Nodo *actual = new Nodo();
	
	actual = lista;
	
	while (actual != NULL) {
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
}

void buscarLista(Nodo *lista, int n) {
	
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while ((actual != NULL) && (actual->dato <= n)) {
		
		if (actual->dato == n) {
			band = true;
			
		}
		
		actual = actual->siguiente;
	}
	
	if (band == true) {
		
		cout<<"Elemento "<<n<<" SI ha sido encontrado en lista\n";
		
	} else {
		
		cout<<"Elemento "<<n<<" NO ha sido encontrado en lista\n";
	}
}

void eliminarNodo(Nodo *& lista, int n) {
	
	//Preguntar su la lista no está vacia
	if (lista != NULL) {
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar = lista;
		
		//Recorrer la lista
		while ((aux_borrar != NULL) && (aux_borrar->dato != n)) {
			
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
			
		}
		
		//El elemento no ha sido encontrado
		if (aux_borrar == NULL) {
			cout<<"El elemento no existe";
		} 
		//El primer elemento es el que vamos a eliminar
		else if (anterior == NULL){ 
			lista = lista->siguiente;
			delete aux_borrar;
			cout<<"\nEl elemento ha sido borrado";
		} 
		//El elemento a eliminar no es el primero
		else {
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
			cout<<"\nEl elemento ha sido borrado";
		}
		
	}
	
	
}

void eliminarLista(Nodo *&lista, int &n) {
	
	Nodo *aux = lista;
	
	n = aux->dato;
	
	lista = aux->siguiente;
	
	delete aux;
	
	
}


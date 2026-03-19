

/*

Arboles:
Consta de un conjunto finito de elementos, denominados nodo y 
un conjunto finito de lineas dirigidas, denominadas ramas, que conectan los
nodos

Propiedades:
Longitud de camino -> A -> ramas -> B
Altura de un nodo -> desde las hojas al nodo
Profundidad de un nodo -> desde la raiz hasta el nivel del nodo
Niveles
Nodo hermanos -> al mismo nivel y del mismo padre

Arbol binario 
Es un arbol de orden 2. Se conoce el nodo de la izquierda como hijo izquierdo
y el nodo de la derecha como hijo derecho. 
Es una estructura recursiva. Se divide en tres subcojuntos disjuntos:
a. Nodo raiz
b. Subarbol izquierdo
c. Subarbol derecho

Tipos de arboles binarios
1. Arbol lleno -> todo los nodos tienen hijos excepto las hojas del mismo nivel
2. Arbol completo -> las hojas no están al mismo nivel
3. Arbol degenerado -> solo tiene hijos por un solo lado

Arbol binario de busqueda
Es aquel que dado un nodo, todos los datos del subarbol izquierdo son menores,
mientras que todos los datos del subarbol derecho son mayores

Operaciones
1. Insertar un nodo en el arbol
a. Primero creamos el nodo
b. Tener en cuenta-> si el arbol está vacío / ya tiene un nodo o más
2. Mostrar el arbol completo
a. Definimos la funcion
b. Tener en cuenta-> si el arbol está vacío / ya tiene un nodo o más
3. Buscar un nodo especifica
a. Definimos la funcion
b. Tener en cuenta-> si el arbol está vacío / ya tiene el nodo 
4. Recorrer el arbol
a. Recorrido preOrden -> vista la raiz, luego el subarbol izq y finalmente
subarbol der
a.1 Definimos la funcion
a.2 Tener en cuenta-> si el arbol está vacío / ya tiene el nodo 
b. Recorrido inOrden-> subarbol izq-> raiz-> subarbol der
c. Recorrido posOrden -> subarbol izq -> subarbol der -> raiz

5. Borrar un nodo del arbol

*/




#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *izq;
	Nodo *der;
};

void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);
bool busquedaNodo (Nodo *, int);
void recorridoPreOrden (Nodo *);
void recorridoInOrden (Nodo *);
void recorridoPosOrden (Nodo *);

Nodo *arbol = NULL;

int main(){
	
	menu();
	
	//Ingresar: 8 - 3 - 10 - 1 - 6 - 4 - 7 - 14 - 13
	
	return 0;
}
	
	void menu() {
		
		int dato, opcion, cont = 0;
		
		do {
			cout<<"\t.:Menu:.\n";
			cout<<"1. Inserta un nuevo nodo\n";
			cout<<"2. Mostar el arbol completo\n";
			cout<<"3. Buscar un elemento en el arbol\n";
			cout<<"4. Recorrer el arbol en pre Orden\n";
			cout<<"5. Recorrer el arbol en in Orden\n";
			cout<<"6. Recorrer el arbol en pos Orde\n";
			cout<<"7. Salir\n";
			cout<<"Opción: ";
			cin>>opcion;
			
			switch (opcion) {
			case 1: 
				cout<<"Digite un número"<<endl;
				cin>>dato;
				insertarNodo(arbol, dato);
				cout<<"\n";
				system("pause");
				break;
			case 2: 
				cout<<"\nMostrando el árbol completo: \n\n";
				mostrarArbol(arbol, cont);
				cout<<"\n";
				system("pause");
				break;
				
			case 3:
				cout<<"\nDigite un número a buscar: ";
				cin>>dato;
				if (busquedaNodo(arbol, dato) == true) {
					
					cout<<"\nEl elemento "<<dato<<" SI ha sido encontrado\n";
				} else {
					cout<<"\nEl elemento "<<dato<<" NO ha sido encontrado\n";
				}
				
				cout<<"\n";
				system("pause");
				break;
				
			case 4:
				cout<<"\nRecorrido en Pre Orden:\n\n";
				recorridoPreOrden(arbol);
				cout<<"\n";
				system("pause");
				break;
				
			case 5:
				
				cout<<"\nRecorrido en In Orden:\n\n";
				recorridoInOrden(arbol);
				cout<<"\n";
				system("pause");
				break;
				
			case 6:
				
				cout<<"\nRecorrido en Pos Orden:\n\n";
				recorridoPosOrden(arbol);
				cout<<"\n";
				system("pause");
				break;
				
			}
			
			system("cls"); //Borrar
			
			
		} while (opcion != 7);
	}
	
	
	Nodo *crearNodo(int n) {
		
		Nodo *nuevo_nodo = new Nodo();
		
		nuevo_nodo->dato = n;
		nuevo_nodo->der = NULL;
		nuevo_nodo->izq = NULL;
		
		return nuevo_nodo;
	}
	
	void insertarNodo(Nodo *&arbol, int n){
		
		if (arbol == NULL) { //Si el arbol esta vacio
			
			Nodo *nuevo_nodo = crearNodo(n);
			arbol = nuevo_nodo;
		} else {  //Si el valor tiene uno o mas nodos
			int valorRaiz = arbol->dato;  //Obtenemos el valor de la raiz
			
			if (n < valorRaiz) { //Menor a la raiz
				insertarNodo(arbol->izq, n);
			} else {  //Mayor a la raiz
				insertarNodo(arbol->der, n);
			}
			
		}
		
	}
		
		void mostrarArbol(Nodo *arbol, int cont) {
			
			if (arbol == NULL) {
				return;
			} else {
				mostrarArbol(arbol->der,cont+1);
				for (int i=0; i<cont; i++) {
					cout<<"   ";
				}
				
				cout<<arbol->dato<<endl;
				mostrarArbol(arbol->izq, cont+1);
			}
		}
		
		bool busquedaNodo (Nodo *arbol, int n) {
			
			if (arbol == NULL) { //Si el arbol esta vacio
				
				return false;
				
			} else if (arbol->dato == n) { //Si el nodo es igual al elemento
				
				return true;
				
			} else if (n < arbol->dato) {
				
				return busquedaNodo(arbol->izq, n);
			} else {
				
				return busquedaNodo(arbol->der, n);
			}
		}
		
		void recorridoPreOrden(Nodo *arbol) {
			
			if (arbol == NULL) {
				
				return;
			} else {
				
				cout<<arbol->dato<<" - ";
				recorridoPreOrden(arbol->izq);
				recorridoPreOrden(arbol->der);
			}
		}
		
		void recorridoInOrden(Nodo *arbol) {
			
			if (arbol == NULL) {
				
				return;
			} else {
				recorridoInOrden(arbol->izq);
				cout<<arbol->dato<<" - ";
				recorridoInOrden(arbol->der);
			}
			
			
			
		}
		
		void recorridoPosOrden (Nodo *arbol) {
			
			if (arbol == NULL) {
				
				return;
			} else {
				recorridoPosOrden(arbol->izq);
				recorridoPosOrden(arbol->der);
				cout<<arbol->dato<<" - ";
				
			}
			
		}
		

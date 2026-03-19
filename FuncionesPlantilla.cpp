
//Plantillas de Funciones

#include<iostream>

using namespace std;

//Prototipo 
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	
	int num1=-9;
	double num2=14.58;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	
	
	return 0;
}

	//Definicion
	template <class TIPOD>
		void mostrarAbs(TIPOD numero){
		
		if (numero<0) {
			numero = numero*-1;
		}
		
		cout<<"El valor absoluto es "<<numero<<endl;
		
	}
















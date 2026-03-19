
/*

Punteros - declaracion de punteros

&n= la direccion de n
*n= la variable cuya direccion esta almacenada en n 

*/



#include<iostream>

using namespace std;

int main(){
	
	
	int num, *dir_num;
	
	num = 20;
	dir_num = &num; //Guardando la posicion de memoria
	
	cout<<"Numero: "<<num<<endl;
	cout<<"Dirección de memoria: "<<&num<<endl;
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Dirección de memoria: "<<dir_num<<endl;
	
	return 0;
}















//Paso por referencia

#include<iostream>

using namespace std;

void valNuevo(int&,int&);


int main(){
	
	int num1, num2;
	
	cout<<"Digite 2 números: "<<endl;
	cin>>num1;
	cin>>num2;
	
	valNuevo(num1, num2);
	
	cout<<"El nuevo valor del primer número: "<<num1<<endl;
	cout<<"El nuevo valor del segundo número: "<<num2<<endl;
	
	
	return 0;
}

	void valNuevo(int& xnum, int& ynum) {
		
		cout<<"El valor del primer número es "<<xnum<<endl;
		cout<<"El valor del segundo número es "<<ynum<<endl;
		
		xnum=45;
		ynum=85;
		
	}































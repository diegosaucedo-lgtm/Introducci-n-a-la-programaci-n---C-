
//Correspondencia entre arrays y punteros

#include<iostream>

using namespace std;

int main(){
	
	int num[]={1,2,3,4,5};
	int *dir_num;
	
	dir_num=num;
	
	for(int i=0; i<5; i++) {
		
		cout<<"\nElemnto del vector: ["<<i<<"]: "<<*dir_num++;
		
	}
	
	for(int i=0; i<5; i++) {
		
		cout<<"\nElemnto del vector: ["<<i<<"]: "<<dir_num++;
		
	}
	
	return 0;
}
	




















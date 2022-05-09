//braulio enrique quispe cabana laboratorio grupo: c cui:20181738
//. Hacer un array unidimensional que acepte ocho números enteros. Luego le 
//pregunte al usuario que ingrese un número a buscar, implementar una función que 
//busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso 
//contrario, retornar falso.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

bool buscar_num(int arreglo[8],int num);

int main(){
	int numeros[8],num1;
	for(int i=0;i<8;i++){
		cout<<"ingrese numero ["<<i<<"]: "; cin>>numeros[i];
	}
	cout<<"que numero esta buscando: "; cin>>num1;
	cout<<buscar_num(numeros,num1);
	getch();
	return 0;
}

bool buscar_num(int arreglo[8],int num){
	int s=0;
	for(int i=0;i<8;i++){
		if(arreglo[i]==num){
			s++;
			return true;
		}
	}
	if(s==0){
		return false;
	}
}
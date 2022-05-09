//braulio enrique quispe cabana laboratorio grupo: c cui:20181738
//. Implementar un programa que rellene un array con los números primos 
//comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	int arreglo[50],j=0;
	for(int i=1;i<=100;i++){
		int cont=0;
		for(int x=2;x<=i/2;x++){
			if(i%x==0){
				cont++;
			}
		}
		if(cont<1){
			arreglo[j]=i;
			j++;
		}
	}
	for(int i=0;i<j;i++){
		cout<<arreglo[j-i-1]<<" ";
	}
	getch();
	return 0;
}
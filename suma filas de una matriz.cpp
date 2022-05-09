//braulio enrique quispe cabana laboratorio grupo: c cui:20181738
//Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final, 
//debe mostrar la suma de todos los números que estén en una fila par.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	int matriz[5][3];
	for(int i=1;i<=5;i++){
		int sum=0;
		for(int j=1;j<=3;j++){
			cout<<"ingrese un numero para la matriz ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
		}
	}
	for(int i=1;i<=5;i++){
		int sum=0;
		for(int j=1;j<=3;j++){
			if(i%2==0){
				sum+=matriz[i][j];
			}
		}
		if(i%2==0){
			cout<<"suma fila ["<<i<<"]: "<<sum<<endl;
		}
	}
	getch();
	return 0;
}
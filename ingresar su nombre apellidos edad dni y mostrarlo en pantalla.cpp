//braulio enrique quispe cabana laboratorio grupo: c cui:20181738
//Escribir un programa donde se pueda ingresar los datos de tres personas, como el 
//nombre, apellido, edad y DNI y luego lo muestre por pantalla.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	string nombres[3],apellidos[3];
	int edad[3],dni[3];
	for(int i=0;i<3;i++){
		cout<<"ingrese nombre ["<<i+1<<"]: "; getline(cin,nombres[i]);
		cout<<"ingrese apellidos "<<nombres[i]<<": ";  getline(cin,apellidos[i]);
		cout<<"ingrese su edad "<<nombres[i]<<" "<<apellidos[i]<<": "; cin>>edad[i];
		cout<<"ingrese su dni "<<nombres[i]<<" "<<apellidos[i]<<": "; cin>>dni[i];
	}
	cout<<"  NOMBRE /  APELLIDOS /  EDAD /  DNI "<<endl;
	for(int i=0;i<3;i++){
		cout<<i+1<<" "<<nombres[i]<<"   "<<apellidos[i]<<"    "<<edad[i]<<"        "<<dni[i]<<endl;
	}
	getch();
	return 0;
}
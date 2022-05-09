#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	int matriz[3][3],sum[3],may;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"ingresa numero de la matriz["<<i+1<<"]["<<j+1<<"]: "; cin>>matriz[i][j];
		}
	}
	for(int i=0;i<3;i++){
		int aux=0;
		for(int j=0;j<3;j++){
			aux+=matriz[i][j];
		}
		sum[i]=aux;
	}
	may=sum[0];
	for(int i=0;i<3;i++){
		if(sum[i]>may){
			may=sum[i];
		}
	}
	cout<<endl;
	cout<<"la fila mayor de la matriz es: "<<may;
	getch();
	return 0;
}
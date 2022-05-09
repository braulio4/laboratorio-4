// Escribe un programa, que trabajando mediante funciones, presente un menú al 
//usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para 
//arriba o para abajo.

#include <iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int matriz[3][3];
	int op;
	bool repetir = true; 

	cout <<"Ingrese matriz: ";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "Fila [" << i+1 << "] Columna[" << j+1 << "]: ";
			cin >> matriz[i][j];
		}		
	}	

    do {
        cout << "1. mostrar matriz" << endl;
        cout << "2. mover columnas a derecha" << endl;
        cout << "3. mover columnas a izquierda" << endl;
        cout << "4. mover filas a arriba" << endl;
        cout << "5. mover filas a abajo" << endl;
        cout << "0. salir" <<endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> op;
        
        switch (op) {
            case 1:
                         
                cout << "\nmostrar matriz...\n\n";
                for(int i = 0; i < 3; i++){
                	for(int j = 0; j < 3; j++){
                		cout << matriz[i][j] << " ";

						if(matriz[i][j] < 100){
							cout << " ";
							if(matriz[i][j] < 10)
								cout << " ";
						}
                	}
                	cout<<endl;
                }
                
                break;
                
            case 2:
                                                
            
				for (int i = 0; i < 3; i++) {
				   int tmp = matriz[i][2];
				   for (int j = 2; j > 0; j--)  {
				       matriz[i][j] = matriz[i][j-1];
				   }
				   matriz[i][0] = tmp;
				}
                cout << "\nLas columnas han sido desplazadas a la derecha\n";
                break;
                
            case 3:
                            

				for (int i = 0; i < 3; i++) {
				   int tmp = matriz[i][0];
				   for (int j = 1; j < 3; j++) {
				       matriz[i][j-1] = matriz[i][j];
				   }
				   matriz[i][2] = tmp;
				}                   
                cout << "\nLas columnas han sido desplazadas a la izquierda\n";
                break;

            case 4:
                            

            	for (int j = 0; j < 3; j++) {
				   int tmp = matriz[0][j];
				   for (int i = 0; i < 2; i++) {
				       matriz[i][j] = matriz[j+1][j];
				   }
				   matriz[2][j] = tmp;
				} 
                cout << "\nLas filas han sido desplazadas hacia arriba\n";
                break;

            case 5:
                            

            	for (int j = 0; j < 3; j++) {
				   int tmp = matriz[2][j];
				   for (int i = 2; i > 0; i--) {
				       matriz[i][j] = matriz[i-1][j];
				   }
				   matriz[0][j] = tmp;
				}             
				cout << "\nfilas desplazadas hacia abajo\n";				                   
                break;
                
            case 0:
            	repetir = false;
            	break;
            
            default:
            	cout << "no valida";
               	break;
        }        
    } while (repetir);
	 getch();
}
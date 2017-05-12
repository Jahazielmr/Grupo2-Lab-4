#include <iostream>
#include <vector>
#include "Pieza.h"
#include "General.h"
#include "Marine.h"
#include <string>



using namespace std; 
int menu();
void printMatrix(int, string**);

int main() { 

//Crear las piezas;

	Marine marineN1("N");
	Marine marineN2("N");
	Marine marineN3("N");
	Marine marineN4("N");
	Marine marineN5("N");
	Marine marineN6("N");
	Marine marineN7("N");
	Marine marineN8("N");
	Marine marineN9("N");
	Marine marineN10("N");
	Marine marineN11("N");
	Marine marineN12("N");

	Marine marineB1("B");
	Marine marineB2("B");
	Marine marineB3("B");
	Marine marineB4("B");
	Marine marineB5("B");
	Marine marineB6("B");
	Marine marineB7("B");
	Marine marineB8("B");
	Marine marineB9("B");
	Marine marineB10("B");
	Marine marineB11("B");
	Marine marineB12("B");

	int f,c,d,e; 
	char x; 
	string** matriz = new string*[8];

	for(int i = 0; i < 8; i++) {
		matriz[i] = new string[8];
	}

	int piezas = 0;

	bool salir = false;
    	while (!salir){
        	switch(menu()){
            		case 1:{
				matriz[0][0] = " ";
			        matriz[0][1] = marineN1.getColor();
        			matriz[0][2] = " ";
	        		matriz[0][3] = marineN2.getColor();
        			matriz[0][4] = " ";
	        		matriz[0][5] = marineN3.getColor();
        			matriz[0][6] = " ";
	        		matriz[0][7] = marineN4.getColor();
        			matriz[1][0] = marineN5.getColor();
			        matriz[1][1] = " ";
			        matriz[1][2] = marineN6.getColor();
			        matriz[1][3] = " ";
			        matriz[1][4] = marineN7.getColor();
			        matriz[1][5] = " ";
			        matriz[1][6] = marineN8.getColor();
			        matriz[1][7] = " ";
			        matriz[2][0] = " ";
			        matriz[2][1] = marineN9.getColor();
			        matriz[2][2] = " ";
			        matriz[2][3] = marineN10.getColor();
			        matriz[2][4] = " ";
			        matriz[2][5] = marineN11.getColor();
			        matriz[2][6] = " ";
			        matriz[2][7] = marineN12.getColor();
			        matriz[3][0] = " ";
			        matriz[3][1] = " ";
			        matriz[3][2] = " ";
			        matriz[3][3] = " ";
			        matriz[3][4] = " ";
			        matriz[3][5] = " ";
			        matriz[3][6] = " ";
			        matriz[3][7] = " ";
			        matriz[4][0] = " ";
			        matriz[4][1] = " ";
 			        matriz[4][2] = " ";
 			        matriz[4][3] = " ";
			        matriz[4][4] = " ";
			        matriz[4][5] = " ";
			        matriz[4][6] = " ";
			        matriz[4][7] = " ";
				matriz[5][0] = marineB1.getColor();
			        matriz[5][1] = " ";
			        matriz[5][2] = marineB2.getColor();
			        matriz[5][3] = " ";
			        matriz[5][4] = marineB3.getColor();
			        matriz[5][5] = " ";
			        matriz[5][6] = marineB4.getColor();
			        matriz[5][7] = " ";
			        matriz[6][0] = " ";
			        matriz[6][1] = marineB5.getColor();
			        matriz[6][2] = " ";
			        matriz[6][3] = marineB6.getColor();
			        matriz[6][4] = " ";
			        matriz[6][5] = marineB7.getColor();
			        matriz[6][6] = " ";
			        matriz[6][7] = marineB8.getColor();
			        matriz[7][0] = marineB9.getColor();
			        matriz[7][1] = " ";
			        matriz[7][2] = marineB10.getColor();
			        matriz[7][3] = " ";
			        matriz[7][4] = marineB11.getColor();
			        matriz[7][5] = " ";
			        matriz[7][6] = marineB12.getColor();
			        matriz[7][7] = " ";
				
				printMatrix(8, matriz);
				/*
        			for (f=0;f<8;f++){
                			for (c=0;c<8;c++){
                        			cout<<matriz[f][c];
                			}
                			cout<<endl;
        			}*/

                		break;}
            		
			case 2:
                		salir = true;
                		break;
		}//Fin switch
	}//Fin while

	//system("PAUSE"); 
	return 0; 
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "  MENU" << endl
             << "1.- Jugar" << endl
             << "2.- Salir" <<  endl;

        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 5)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }


    }while(!valido);
    return opcion;
}

void printMatrix(int size, string** matrix){


  for(int i=0;i<size;i++){
     for(int j=0;j<size;j++){
        cout<<" "<<matrix[i][j];

     }
     cout<<endl;
  }
}







//crear, jugar, salir

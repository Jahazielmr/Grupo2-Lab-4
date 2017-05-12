#include <iostream>
#include <vector>
#include "Pieza.h"
#include "General.h"
#include "Marine.h"
#include <string>



using namespace std; 
int menu();

int main() { 

//Crear las piezas;

	Marine marineN1("N");
  	
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
	string matriz[8][8]; 
	int piezas = 0;

	bool salir = false;
    	while (!salir){
        	switch(menu()){
            		case 1:{
				
                		break;}
            		
			case 2:
                		salir = true;
                		break;
		}//Fin switch
	}//Fin while



	matriz[0][0]=' '; 
	matriz[0][1]= marineN1.getColor(); 
	matriz[0][2]=' '; 
	matriz[0][3]='N'; 
	matriz[0][4]=' '; 
	matriz[0][5]='N'; 
	matriz[0][6]=' '; 
	matriz[0][7]='N'; 
	matriz[1][0]='N';
	matriz[1][1]=' '; 
	matriz[6][0]='p'; 
	matriz[2][0]=' '; 
	matriz[7][0]='t'; 
	matriz[7][1]='c'; 
	matriz[7][2]='a'; 
	matriz[7][3]='k'; 
	matriz[7][4]='q'; 
	matriz[7][5]='a'; 
	matriz[7][6]='c'; 
	matriz[7][7]='t'; 

	for (c=0;c<8;c++){ 
		matriz[1][c]='P'; 
		matriz[6][c]='p'; 
	} 
	
	for (f=2;f<6;f++){ 
		for(c=0;c<8;c++){ 
			matriz[f][c]=' '; 
		} 
	} 

	for (f=0;f<8;f++){ 
		for (c=0;c<8;c++){ 
			cout<<matriz[f][c]; 
		} 
		cout<<endl; 
	} 

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









//crear, jugar, salir

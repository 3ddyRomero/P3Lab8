#include "Radical.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int menu();

int main(){
char ejecucion = 'y';

do{
        switch (menu()){
        case 1:{
        		

            break;
        }
        case 2:{
        	
            
            break;
        }
        case 3:{
        	

                        
            break;
        }
        case 4:{
       

        	break;
        }
        case 5:{
          

        	break;
        }
        case 6:{
            

            break;
        }
        case 7:{
            
            break;
        }
        case 8:{
                     
            
            break;
        }
        case 9:{
            

            break;
        }
        case 10:{

            
            break;
        }
        case 11:{

            
            break;
        }
        case 12:{

            
            break;
        }
        case 13:{

            
            break;
        }
        case 14:{
        	ejecucion = 'n';
            cout<< "La ejecución ha finalizado " << endl;
            cout<< "****\\\\Buen dia//****" << endl;            
            break;
        }
        } //end switch
    } while (ejecucion != 'n');


    return 0;
}




int menu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Bienvenido al Laboratorio 8 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Agregar Numeros al banco." << endl;
    cout << "2. Suma." << endl;
    cout << "3. Suma Entero." << endl;
    cout << "4. Suma Decimal." << endl;
    cout << "5. Resta." << endl;
    cout << "6. Resta Entero." << endl;
    cout << "7. Resta Decimal." << endl;
    cout << "8. Multiplicacion." << endl;
    cout << "9. Multiplicacion Entero." << endl;
    cout << "10. Multiplicacion Decimal." << endl;
    cout << "11. Division." << endl;
    cout << "12. Division Entero." << endl;
    cout << "13. Division Decimal." << endl;
    cout << "14. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}
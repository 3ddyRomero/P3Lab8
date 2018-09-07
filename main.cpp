#include "Radical.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int menu();
void Fichero(string);
void Suma();
void BancoRadicales();

vector<Radical* > radicales;

int main(){
char ejecucion = 'y';

do{
        switch (menu()){
        case 1:{
        		BancoRadicales();

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
    cout << "3. Suma Entero y Decimal." << endl;
    cout << "4. Resta." << endl;
    cout << "5. Resta Entero y Decimal." << endl;
    cout << "6. Multiplicacion." << endl;
    cout << "7. Multiplicacion Entero y Decimal." << endl;
    cout << "8. Division." << endl;
    cout << "9. Division Entero y Decimal." << endl;
    cout << "10. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

void BancoRadicales(){
    int coeficiente, indice, radicando;
    
    cout << "Ingrese el Coeficiente: ";
    cin >> coeficiente;
    
    cout << "Ingrese el Indice: ";
    cin >> indice;

    cout << "Ingrese el Radicando: ";
    cin >> radicando;

    cout << endl;

    Radical *temp = new Radical(coeficiente,indice,radicando);
    radicales.push_back(temp);

    for (int i = 0; i < radicales.size(); i++){
            cout << i << ") " << radicales[i] << endl;
        }
}

void Suma(){
	int pos;
    cout << "--->Suma<---" << endl;
    pos = radicales.size() + 1;
    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++){
            cout << i << ") " << radicales[i] << endl;
        }
        cout << "Elija el Radical 1: ";
        cin >> pos;
    }
    cout << endl;

    Radical* radical = radicales[pos];

    cout << "-->Radical 1: " << radical << endl;
    pos = radicales.size() + 1;

    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++)
        {
            cout << i << ") " << radicales[i] << endl;
        }
        cout << "Elija el Radical 2: ";
        cin >> pos;
    }
    cout << endl;
    
    Radical *radical2 = radicales[pos];
    cout << "-->Radical 2: " << *radical2 << endl;
    
    /*const Radical *suma;
    suma = *radical + *radical2;
    cout << "--->Suma: " << *suma << endl;
    stringstream salida;
    salida << *radical << " + " << *radical2 << " = " << *suma;
    string a = salida.str();*/

}

void Fichero(string mkf){
    string file = "ArchivoRadicales.txt";
    ofstream ficheroSalida(file.c_str(), ios::app);
    ficheroSalida << mkf;
    ficheroSalida << "\n";
} 
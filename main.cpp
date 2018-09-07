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
void abrirRadicales();
void Resta();
void Multiplicacion();
void Division();


vector<Radical *> radicales;

int main(){
char ejecucion = 'y';

do{
        switch (menu()){
        case 1:{
        		BancoRadicales();

            break;
        }
        case 2:{
        	Suma();
            
            break;
        }
        case 3:{
        	

                        
            break;
        }
        case 4:{
       		Resta();

        	break;
        }
        case 5:{
          

        	break;
        }
        case 6:{
            Multiplicacion();

            break;
        }
        case 7:{
            
            break;
        }
        case 8:{
            Division();         
            
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
            cout << i << ") " << *radicales[i] << endl;
        }
}

void Suma(){
	int pos;
    cout << "--->Suma<---" << endl;
    pos = radicales.size() + 1;
    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++){
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 1: ";
        cin >> pos;
    }
    cout << endl;

    Radical *radical = radicales[pos];

    cout << "-->Radical 1: " << *radical << endl;
    pos = radicales.size() + 1;

    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++)
        {
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 2: ";
        cin >> pos;
    }
    cout << endl;
    
    Radical *radical2 = radicales[pos];
    cout << "-->Radical 2: " << *radical2 << endl;
    
    const Radical* suma;
    suma = *radical + *radical2;
    cout << "--->Suma: " << *suma << endl;
    
    stringstream salida;
    salida << *radical << " + " << *radical2 << " = " << *suma;
    string f = salida.str();

    Fichero(f);

}

void Resta(){
	int pos;
    cout << "--->Resta<---" << endl;
    pos = radicales.size() + 1;
    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++){
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 1: ";
        cin >> pos;
    }
    cout << endl;

    Radical *radical = radicales[pos];

    cout << "-->Radical 1: " << *radical << endl;
    pos = radicales.size() + 1;

    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++)
        {
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 2: ";
        cin >> pos;
    }
    cout << endl;
    
    Radical *radical2 = radicales[pos];
    cout << "-->Radical 2: " << *radical2 << endl;
    
    const Radical* resta;
    resta = *radical2 - *radical;
    cout << "--->Resta: " << *resta << endl;
    
    stringstream salida;
    salida << *radical << " - " << *radical2 << " = " << *resta;
    string f = salida.str();

    Fichero(f);
}

void Multiplicacion(){
	int pos;
    cout << "--->Multiplicacion<---" << endl;
    pos = radicales.size() + 1;
    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++){
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 1: ";
        cin >> pos;
    }
    cout << endl;

    Radical *radical = radicales[pos];

    cout << "-->Radical 1: " << *radical << endl;
    pos = radicales.size() + 1;

    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++)
        {
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 2: ";
        cin >> pos;
    }
    cout << endl;
    
    Radical *radical2 = radicales[pos];
    cout << "-->Radical 2: " << *radical2 << endl;
    
    const Radical* multi;
    multi = *radical * *radical2;
    cout << "--->Multiplicacion: " << *multi << endl;
    
    stringstream salida;
    salida << *radical << " * " << *radical2 << " = " << *multi;
    string f = salida.str();

    Fichero(f);
}

void Division(){
	int pos;
    cout << "--->Division<---" << endl;
    pos = radicales.size() + 1;
    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++){
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 1: ";
        cin >> pos;
    }
    cout << endl;

    Radical *radical = radicales[pos];

    cout << "-->Radical 1: " << *radical << endl;
    pos = radicales.size() + 1;

    while (pos < 0 || pos >= radicales.size()){

        for (int i = 0; i < radicales.size(); i++)
        {
            cout << i << ") " << *radicales[i] << endl;
        }
        cout << "Elija el Radical 2: ";
        cin >> pos;
    }
    cout << endl;
    
    Radical *radical2 = radicales[pos];
    cout << "-->Radical 2: " << *radical2 << endl;
    
    const Radical* divi;
    divi = *radical2 / *radical;
    cout << "--->Division: " << *divi << endl;
    
    stringstream salida;
    salida << *radical << " / " << *radical2 << " = " << *divi;
    string f = salida.str();

    Fichero(f);
}

void abrirRadicales()
{
    ifstream archivo("Log.txt");
    if (archivo.is_open())
    {
        while (!archivo.eof())
        {
            string linea;
            getline(archivo, linea);
            if (linea.size() < 1)
            {
                break;
            }
            //log.push_back(linea);
        }
        archivo.close();
    }
}

void Fichero(string linea){

    string file = "Log.txt";
    ofstream ficheroSalida(file.c_str(), ios::app);
    if(ficheroSalida.is_open()){
    ficheroSalida << linea;
    ficheroSalida << "\n";
	ficheroSalida.close();
	}
} 
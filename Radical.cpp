#include "Radical.h"
#include <math.h>

using namespace std;

Radical::Radical(){

}

Radical::Radical(int pCoeficiente, int pIndice, int pRadicando){
	Coeficiente = pCoeficiente;
	Indice = pIndice;
	Radicando = pRadicando;
}

int Radical::getCoeficiente(){
	return Coeficiente;
}

void Radical::setCoeficiente(int pCoeficiente){
	Coeficiente = pCoeficiente;
}

int Radical::getIndice(){
	return Indice;
}

void Radical::setIndice(int pIndice){
	Indice = pIndice;
}

int Radical::getRadicando(){
	return Radicando;
}

void Radical::setRadicando(int pRadicando){
	Radicando = pRadicando; 
}

ostream &operator<<(ostream& os, Radical& radical){
    os <<  radical.Coeficiente <<"("<<radical.Indice<<"√"<<radical.Radicando<<")" ;

    return os;
}

ostream &operator<<(ostream& os, const Radical& radical){
    os <<  radical.Coeficiente <<"("<<radical.Indice<<"√"<<radical.Radicando<<")" ;
    
    return os;
}

const Radical* Radical::operator+(Radical& suma){
	int NCoeficiente;
	Radical* radical;
	if(Radicando == suma.getRadicando() && Indice == suma.getIndice()){

		NCoeficiente = suma.getCoeficiente() + Coeficiente;
		radical = new Radical(NCoeficiente,Indice,Radicando);
	}else {
		cout<<"No se puede realizar esta Operacion."<<endl;
	}

	return radical;
}

const Radical* Radical::operator-(Radical& resta){
	int NCoeficiente;
	Radical* radical;
	if(Radicando == resta.getRadicando() && Indice == resta.getIndice()){

		NCoeficiente = resta.getCoeficiente() - Coeficiente;
		radical = new Radical(NCoeficiente,Indice,Radicando);
	}else {
		cout<<"No se puede realizar esta Operacion."<<endl;
	}

	return radical;
}

const Radical* Radical::operator*(Radical& multi){
	int NCoeficiente;
	Radical* radical;
	if(Radicando == multi.getRadicando() && Indice == multi.getIndice()){

		NCoeficiente = multi.getCoeficiente() * Coeficiente;
		radical = new Radical(NCoeficiente,Indice,Radicando);
	}else {
		cout<<"No se puede realizar esta Operacion."<<endl;
	}
	return radical;
}

const Radical* Radical::operator/(Radical& divi){
	int NCoeficiente;
	Radical* radical;
	if(Radicando == divi.getRadicando() && Indice == divi.getIndice()){

		NCoeficiente = divi.getCoeficiente() / Coeficiente;
		radical = new Radical(NCoeficiente,Indice,Radicando);
	}else {
		cout<<"No se puede realizar esta Operacion."<<endl;
	}
	return radical;
}


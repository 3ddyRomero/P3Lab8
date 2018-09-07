#include "Radical.h"

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
    os <<  radical.Coeficiente <<"("<<radical.Indice<<"√"<<radical.Radicando ;
    return os;
}

const Radical *Radical::*operator+(Radical& suma){
	if(pRadicando == suma.getRadicando() && pIndice == suma.getIndice()){

		int NCoeficiente = suma.getCoeficiente()+ pCoeficiente;
		int NIndice = (1/suma.getIndice());
		int NRadicando = pow(suma.getRadicando(),NIndice);

    
    Radical *radical = new Radical(NCoeficiente,NIndice,NRadicando);
	
	}
	return radical;
}

const Radical *Radical::*operator-(Radical& resta){
	int NCoeficiente = suma.getCoeficiente();
	int NIndice = (1/suma.getIndice());
	int NRadicando = pow(suma.getRadicando(),NIndice);
    
    Radical *radical = new Radical(NCoeficiente,NIndice,NRadicando);

	return radical;
}


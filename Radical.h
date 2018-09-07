#ifndef RADICAL_H
#define RADICAL_H

#include <iostream>

using namespace std;

class Radical{
	private:
		int coeficiente, indice , radicando;
	public:
		Radical();
		Radical(int,int,int);

		int getCoeficiente();
		void setCoeficiente(int);

		int getIndice();
		void setIndice(int);

		int getRadicando();
		void setRadicando(int);

		~Radical();

		friend ostream& operator<<(ostream&, Radical&);

  	//Metodos de sobrecarga
  	const Radical *operator+( Radical &) ;
  	const Radical *operator-( Radical &) ;
  	const Radical *operator*( Radical &) ;
  	const Radical *operator/( Radical &) ;
};
#endif
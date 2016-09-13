// CompitoCppBase(8_9_10).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// i template possono essere attribuiti e specializzati parzialmente o totalmente 
// sia a classi sia a funzioni

template<typename T, typename M, int I>
class Base {};

/*ESERCIZIO 8 & ESERCIZIO 9*/
// Un template specializzato è un template i cui parametri Type o non-Type sono stati totalmente
// o parzialmente(solo alcuni di essi) assegnati a dei tipi o valori specifici.
// Questo significa che il mio template:

// 1)totalmente specializzato -> descriverà il comportamento della classe/metodo della classe specifico
//								 per quei tipi o valori passati al template

// Esempio:
template<>
class Base<float, bool, 5> 
{ public:
	Base()
	{ 
		cout << "Specializzatione Totale" << endl;
	}
};

// 2)parzialmente specializzato -> descriverà il comportamento comune di tutte le possibili classi che hanno 
//								   quei tipi o valori passati al template ma spaziano ancora in tutti i gradi di libertà
//								   del template che non sono stati definiti
//								   NB: non è possibile una specializzazione parziale di una funzione templatica,solo le classi!


// Esempio: (specializzo M in bool)
template<typename T, int I>
class Base<T, bool, I> //non vanno più segnati int e typename per i parametri ancora liberi
{ 
public:
	Base()
	{ 
		cout << "Specializzatione Parziale" << endl; 
	} 
};

/*ESERCIZIO 10*/

template<typename T1, typename T2> void f(T1, T2) { cout << "1" << endl; }; //1
template<typename T> void f(T) { cout << "2" << endl; };					//2
template<typename T> void f(T,T) { cout << "3" << endl; };					//3
template<typename T> void f(T*) { cout << "4" << endl; };					//4
template<typename T> void f(T*, T) { cout << "5" << endl; };				//5
template<typename T> void f(T, T*) { cout << "6" << endl; };				//6
template<typename T> void f(int, T*) { cout << "7" << endl; };				//7
template<> void f<int>(int) { cout << "8" << endl; };						//8
void f(int, double) { cout << "9" << endl; };								//9
void f(int) { cout << "10" << endl; };										//10

// esempio aggiuntivo: vince 9 su questo!
// piu' specializzato templatico vince su meno specializzato templatico,non templatico vince su templatico
template<> void f<int,double>(int,double) { cout << "11" << endl; };		//11

template<typename T>
class complex {};

int main()
{
	//ESERCIZIO 8 & 9
	Base<float, bool, 5> base;   //Specializzatione Totale
	Base<double, bool, 4> base2; //Specializzatione Parziale
	cout << "" << endl;

	//ESERCIZIO 10
	int i = 0;
	double d = 0.0;
	float ff = 0.0f;

	complex<double> c;

	f(i);        //10
	f<int>(i);   //8
	f(i, i);     //3
	f(c);		 //2
	f(i, ff);	 //1
	f(i, d);	 //9
	f(c, &c);	 //6
	f(i, &d);	 //7
	f(&d, d);	 //5
	f(&d);		 //4
	f(d, &i);	 //1
	f(&i, &i);	 //3

	cout << "" << endl;
	system("pause");
    return 0;
}


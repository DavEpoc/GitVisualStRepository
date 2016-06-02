// CompitoCppBase.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int UnknownFunc(int n)
{
	int k = 0;
	while (n)
	{
		k++;
		n /= 10; // divido n ogni volta per 10 e tengo conto di quante volte lo faccio
				 // applico uno "shift destro su base 10" a ogni ciclo!
		cout << n << endl;
	}			 // essendo n un int e non float cancella sempre la parte decimale!
				 // quindi finirà ad arrivare a 0! quindi il ciclo si ferma!
				 // ovviamente il tutto è indipendente dal segno!
	return k;
}

int main()
{
	cout << UnknownFunc(-1453453) << endl; // trovo numero cifre del numero n
	system("pause");					   // funziona anche impropriamente se passo un float in tal caso trovo numero cifre parte intera del numero n
	return 0;
}



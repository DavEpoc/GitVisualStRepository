// CompitoCppBase(13).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// funzione di supporto per cout-are il risultato

void coutString(char *str, int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout << str[i];
	}
}

// Versione con utilizzo stack

void reverseWithStack(char *str, int len)
{
	for (int i = len - 1; i > (len - 1) / 2; --i)
	{		
		str[len] = str[len - 1 - i];
		str[len - 1 - i] = str[i];
		str[i] = str[len];
	}
		str[len] = '/0';
}

//Versione no Stack: aggiungo parametro di inizio per evitare la i del ciclo for
//                   passo per reference per evitare creazione di copie o puntatori su stack

//                   c'è un problema: startPosition cambia permanentemente e se non parto dall'inizio swappa 
//                   simmetricamente (sia a destra che a sinistra) solo fino al valore passato come startPosition!

void reverseNoStack(char &str,int &len,int &startPosition)					// len   ->  numero
{																			// &len  ->  indirizzo numero
																			// str   ->  prima lettera stringa
																			// &str  ->  indirizzo stringa
	--startPosition;
	for (startPosition; startPosition < (len - 1) / 2 + 1; ++startPosition)
	{
		(&str)[len]							   =   (&str)[startPosition];
		(&str)[startPosition]				   =   (&str)[len - 1 - startPosition];
		(&str)[len - 1 - startPosition]		   =   (&str)[len];
	}
		(&str)[len]							   =   '/0';
}






int main()
{
	//Esempio versione con stack

	cout << "OnStack:" << endl;
	char myStackString[11] = "Ciao Bella";
	reverseWithStack(myStackString, 10);
	coutString(myStackString, 10);

	cout << endl;

	char myStackString2[8] = "ComeVa?";
	reverseWithStack(myStackString2, 7);
	coutString(myStackString2, 7);

	cout << endl;
	cout << endl;
	
	//Esempio versione senza stack

	cout << "OnHeap:" << endl;
	char *myHeapString = new char[11] {"Ciao Bella"};
	int Len1 = 10;
	int startPosition1 = 1;
	reverseNoStack(*myHeapString, Len1, startPosition1);
	coutString(myHeapString, 10);

	cout << endl;

	char *myHeapString2 = new char[8]{ "ComeVa?" };
	int Len2 = 7;
	int startPosition2 = 1;
	reverseNoStack(*myHeapString2, Len2, startPosition2);
	coutString(myHeapString2, 7);
	
	cout << endl;
	cout << endl;

	system("pause");
    return 0;
}


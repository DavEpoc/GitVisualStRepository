// CompitoCppBase.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void foo()
{
	for (int i = 4; i > 0; --i) // ciclo al contrario da 4 a 1 compreso -> quindi 4 cicli.
								// come visibile dall'output sulla prima colonna verticale!
	{
		cout << i << "\t" << (i & 6) << "\t" << (1 << i) << endl;
	}
	// "\t" horizontal tab -> muovo il cursore di distanza tab
	// mi incolonna separatamente i risultati di i,(i & 6) e (1 << i).
	// (i & 6) applica maschera 6 ai valori i tramite logica AND:
	// in binario: 6 -> 110
	// 4 -> 100, 3 -> 011, 2 -> 010, 1-> 001;
	// Quindi:
	// 100		011		010		001
	//  &		 &		 &		 &
	// 110		110		110		110
	// ---		---		---		---
	// 100		010		010		000
	// in decimale:
	//  4		 2		 2		 0
	// come visibile dall'output sulla seconda colonna verticale!

	// (1 << i) applica uno shift sinistro a 1 inteso come binario
	// quindi moltiplica x2 tante volte quante i
	// shift di 1 con i = 4 -> 10000 che in decimale è 16
	// shift di 1 con i = 3 -> 1000  che in decimale è 8
	// shift di 1 con i = 2 -> 100   che in decimale è 4
	// shift di 1 con i = 1 -> 10    che in decimale è 2
	// come visibile dall'output sulla terza colonna verticale!
}

int main()
{
	foo(); 
	system("pause");
	return 0;
}


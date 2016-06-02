// CompitoCppBase(3_4_5).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
#include "CompitoCppBase(3_4_5).h"

#define pow2(n, e) (n + e) // non � implementazione pow ma serve per esempio
/*ESERCIZIO 3*/
// usare define ci permette di introdurre nuove linee di codice in fase di pre-compilazione
// dove verr� chiamato l'identificativo della macro esso verr� espanso,ovvero al suo posto verranno
// scritte tutte le linee di codice che ne costituiscono il corpo.
// Questo ci permette di evitare overheading di chiamate a funzione ma allo stesso tempo rende molto pi� corposo
// il codice che viene compilato.
// Non c'� una risposta corretta se usare int pow(int n,int e) o #define pow(n, e). 
// Si pu� dire per� che normalmente per quanto detto conviene l'utilizzo della macro per funzioni dal corpo piccolo
// che vengono chiamate molte volte, mentre conviene la chiamata a funzione se il corpo della stessa � lungo e viene chiamata
// raramente.
// L'utilizzo di #define porta ulteriori complicazioni quali la dipendenza dai tipi e il rischio di chiamare molteplici volte
// le funzioni passate come parametro alle macro se queste sono presenti pi� di una volta nel corpo della stessa(macro unsafe)
// 
// attualmente la direttiva #define � surclassata dalla pi� controllata direttiva _inline ottimizzata per la risoluzione dei problemi
// precedenti. I pre-compilatori moderni inoltre attuano automaticamente dei controlli di costo efficienza per determinare se
// una funzione debba essere espansa inline o meno.
// In generale l'utilizzo di una macro non si pu� considerare un'opera di ottimizzazione, mentre � utilissima per la leggibilit�
// del codice.


/*ESERCIZIO 4 & 5*/

int pow(int n, int e)
{
	return n + e; // non � implementazione pow ma serve per esempio
}


int main()
{
	//intanto immagino di dover includere <iostream> altrimenti non legge cout e endl
	int n = 4;
	int e = 2;
	std::cout << "Prova esercizio 4:" << std::endl;
	std::cout << pow2(++n, e) << std::endl;
	// quando la macro si espande stituisce al posto del token n quello che viene passato nella stessa posizione (++n)
	// all'interno del suo corpo (NB che la variabile passata e il token abbiano stesso nome n � un caso)
	// una volta espanso il corpo tutto viene eseguito normalmente: ++n aggiunge 1 ad n gi� all'interno dell'espressione in cui � scritta
	// dunque ovunque essa sia utilizzata nel corpo avr� valore 4 + 1 = 5 e il cout restituir� 5^2 => 25

	/*ESERCIZIO 5 (anche in file .h -> spiegazione)*/
	std::cout << std::endl;
	std::cout << "Risultato esercizio 5:" << std::endl;
	B b;
	std::cout << std::endl;
	std::cout << std::endl;
	system("pause");
    return 0;
}


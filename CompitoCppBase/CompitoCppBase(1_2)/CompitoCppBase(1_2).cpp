// CompitoCppBase(1_2).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
#include <assert.h>

using namespace std;

// In teoria si può fare in tanti modi, sia per come decido di immagazinare le informazioni nelle array
// es: per righe o per colonne.
// Sia per la gestione di possibili wrapping modes(ripetizione figura,specchio,ripetizione bordi,lasciare invariato,etc..)
// sia per come gestire il posizionamento di M2 su M1 e cosa fare se in presenza di vincoli di dimensione:
// se M1 e M2 sono quadrate M1 > M2 e dò errore o metto M2 in M1 e avviso che ho fatto l'opposto di quello richiesto?
// se M1 = MxN e M2 = NxM con N != M ricopio ruotata o do errore o copio dritta solo la parte che rientra?
// ricopio partendo da in alto a sinistra o posso decidere io da dove partire? e se spostando la partenza non ci sta cosa faccio?

// tutto dipende da quello di cui ho bisogno, qui riporto la funzione originale quella debuggata e quella riscritta da me
// la prima che ho scritto è strutturata in modo che:
// 1) ha bisogno che la parte da copiare sia rettangolare e venga copiata su un esistente rettangolo di uguale forma e disposizione.
// 2) parte a ricopiare M2 su M1 dall'estremità in alto a sinistra dell'immagine.
// 3) tutti i valori non sovrascritti da M2 rimangono invariati

// la seconda che ho scritto è strutturata in modo che:
// 1) ha bisogno che la parte da copiare sia rettangolare,viene copiata finchè c'è spazio a partire da un offset x e y
// 2) l'offset parte dall'estremo in alto a sinistra della matrice su ci si copia (solo x e y positivi).
// 3) tutti i valori non sovrascritti da M2 rimangono invariati


// funzione per coutare l'immagine
void coutImageArray(unsigned char *array, int rows, int columns)
{
	int totalSteps = rows * columns;
	for (int i = 0; i < totalSteps; ++i)
	{
		int pos = i%columns;
		if (pos == 0)
		{
			cout << "" << endl;
			cout << "\t";
			cout << array[i];
		}
		else
		{
			cout << "\t";
			cout << array[i];
		}
	}

}


// originale COMMENTATA CAUSA ERRORI!

/*
void BitBlt(unsigned char *dest, int N, int M, unsigned char *src, int H, int K, intx, int y)
{
	for (i = 0; i < K; ++i)
	{
		for (j = 0; j < H; ++j)
		{
			dest[i + j*K] = src[i*H + j];
		}
	}
}
*/

// debuggata
// int x e int y sono inutili cosi servirebbero per decidere da dove partire a copiare un'immagine sull'altra
void BitBlt(unsigned char *dest, int N, int M, unsigned char *src, int H, int K, int x, int y)
{
	
	for (int i = 0; i < K; ++i)
	{
		for (int j = 0; j < H; ++j)
		{
			dest[i + j*K] = src[i*H + j];
			cout << "dest[" << i + j*K << "] = src[" << i*H + j << "]" << endl;
			//ricopia in ordine sparso gli H*K valori di src nei primi H*K elementi dell'array dest.
			// non ci sono controlli sulla compatibilità della dimensione delle matrici
			cout << "" << endl;
		}
	}
	coutImageArray(dest, N, M);
}

// riscritta
void BitBlt2(unsigned char *dest, unsigned int N, unsigned int M, unsigned char *src, unsigned int H, unsigned int K)
{
	assert(N >= H && M >= K && "No Copy Allowed, Check for matrix dimentions");
	int totalSteps = H * K;
	for (int i = 0; i < totalSteps; ++i)
	{
		int numRow = i / K;
		int n = M*numRow;
		dest[n + i%K] = src[i];
		cout << "dest[" << n + i%K << "] = src[" << i << "]" <<endl;
		//sovrascrivo i valori di dest con quelli di src a partire da in alto a sinistra
		//lascio gli altri valori imperturbati.
	}
	coutImageArray(dest, N, M);
}


// riscritta con posizione, x e y indicano la posizione di partenza,la copia avviene se possibile
// verso destra(x positivo) e verso il basso(y positivo)
void BitBlt3(unsigned char *dest, unsigned int N, unsigned int M, unsigned char *src, unsigned int H, unsigned int K, unsigned int x = 1, unsigned int y = 1)
{
	//assert(N >= H && M >= K && "No Copy Allowed, Check for matrix dimentions");
	
	int rowToCopy = H;
	int columnToCopy = K;
	if (H + (x - 1) > N)
	{
		columnToCopy = N - (x - 1);
	}
	if (K + (y - 1) > M)
	{
		rowToCopy = M - (y - 1);
	}
	int totalSteps = rowToCopy * columnToCopy;
	cout << "rowToCopy: " << rowToCopy << " columnToCopy: " << columnToCopy << endl;
	for (int i = 0; i < totalSteps; ++i)
	{
		int numRow = i / columnToCopy + (y - 1);
		int n = M*numRow;
		dest[n + i%columnToCopy + (x - 1)] = src[i];
		cout << "dest[" << n + i%columnToCopy << "] = src[" << i << "]" << endl;
		//sovrascrivo i valori di dest con quelli di src a partire da in alto a sinistra
		//lascio gli altri valori imperturbati.
	}
	coutImageArray(dest, N, M);
}


int main()
{
	//esempi
	unsigned char array[16] =  {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a' , 'a' , 'a' , 'a' , 'a' , 'a', 'a' };
	unsigned char array2[25] = { 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b' };

	//coutImageArray(array2,5,5);

	//Funzione debuggata
	//BitBlt(array2, 5, 5, array, 4, 4, 1, 1);

	cout << "" << endl;
	// Copia di piccolo in grande,Valido
	//BitBlt2(array2, 5, 5, array, 4, 4);

	// Copia di piccolo in grande con offset,Valido
	//BitBlt3(array2, 5, 5, array, 4, 4,3,4);
	BitBlt3(array, 4, 4, array2, 5, 5, 3, 4);

	// Valido
	//BitBlt2(array, 4, 4, array2, 4, 4);

	// Asserta
	//BitBlt2(array, 4, 4, array2, 5, 5);

	cout << "" << endl;
	cout << "" << endl;
	cout << "\t";
	system("pause");
    return 0;
}


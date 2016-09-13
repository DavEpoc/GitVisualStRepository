// CompitoCppBase(19).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// funzione di supporto per debuggare il risultato

void coutString(char *str, int len)
{
	
	for (int i = 0; i < len; ++i)
	{
		if (str[i])
		{
			cout << str[i];
		}
		else
		{
			cout << "_" << i << "_";
		}
	}
}

/*RISCRITTA*/
void NewMemcpy(void * dst, const void*src,unsigned int nBytes) //nessun controllo che su dove scrivo ci sia posto per nBytes?
{
	//Try to be fast and copy a word a time instead of byte by byte
	int* wordDst = reinterpret_cast<int*>(dst);
	int* wordSrc = reinterpret_cast<int*>(const_cast<void*>(src));
	int sizeOfmyInt = sizeof(int);
	int numWords = nBytes / sizeOfmyInt;
	char* myStr = reinterpret_cast<char*>(dst);			//solo per il cout
	for (int i = 0; i < numWords; ++i)
	{
		*wordDst++ = *wordSrc++;
		coutString(myStr, nBytes);						//solo per il cout
		cout << endl;									//solo per il cout
	}
	int numRemaining = nBytes - numWords * sizeOfmyInt;
	//dst = (char*)wordDst;
	//src = (char*)wordSrc;
	char* newDst = reinterpret_cast<char*>(wordDst);	//riprendo dov'ero ripensandolo come char cosi scorro di 1 unità di memoria
	char* newSrc = reinterpret_cast<char*>(wordSrc);	//per volta!
	for (int i = 0; i < numRemaining; ++i)
	{
		*newDst++ = *newSrc++;							
		coutString(myStr, nBytes);						//solo per il cout
		cout << endl;									//solo per il cout
	}
}



/*ORIGINALE*/

void OldMemcpy(char * dst, const char*src, int nBytes)
{
	//Try to be fast and copy a word a time instead of byte by byte
	int* wordDst = (int*)dst;
	int* wordSrc = (int*)src;
	int numWords = nBytes >> 2;
	for (int i = 0; i < numWords; ++i)
	{
		*wordDst++ = *wordSrc++;
		coutString(dst, nBytes);						//solo per il cout
		cout << endl;									//solo per il cout
	}
	int numRemaining = nBytes - (numWords << 2);
	dst = (char*)wordDst;
	src = (char*)wordSrc;
	for (int i = 0; i <= numRemaining; i++)
	{
		*dst++ = *src++;
		coutString(dst, nBytes);						//solo per il cout
		cout << endl;									//solo per il cout
	}
}


int main()
{
	unsigned int nBytes = 9;
	char myFirstFakeMemoryString[11]  = "CiaoBella";
	char mySecondFakeMemoryString[11] = "Ugo      ";

	NewMemcpy(mySecondFakeMemoryString, myFirstFakeMemoryString, nBytes);	//example

	cout << endl;

	unsigned int nBytes2 = 3;
	char myFirstFakeMemoryString2[11]  = "CiaoBella";
	char mySecondFakeMemoryString2[4]  = "Ugo";

	NewMemcpy(myFirstFakeMemoryString2, mySecondFakeMemoryString2, nBytes2);	//example

	cout << endl;

	unsigned int nBytes3 = 9;
	char myFirstFakeMemoryString3[11]  = "CiaoBella";
	char mySecondFakeMemoryString3[11] = "Ugo      ";

	OldMemcpy(mySecondFakeMemoryString3, myFirstFakeMemoryString3, nBytes3);	//Old

	cout << endl;
	system("pause");
    return 0;
}


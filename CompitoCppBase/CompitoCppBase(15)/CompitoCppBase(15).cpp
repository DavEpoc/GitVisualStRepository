// CompitoCppBase(15).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Fattoriale Iterativo

int factorial(unsigned int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result = result*i;
	}
	return result;
}


int main()
{
	//Esempi

	int res = factorial(3);
	cout << res << endl;

	    res = factorial(4);
	cout << res << endl;

	    res = factorial(5);
	cout << res << endl;


	cout << endl;
	system("pause");
    return 0;
}


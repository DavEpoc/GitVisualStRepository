// FactoryPattern.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "indumenti.h"
#include "capo.h"

#include "poolkitindumenti.h"

#include "getkitindumenti.h"
#include "getabbigliamento.h"



using namespace std;

/* indumenti.h */
/* capo.h */

// Maglia
void Maglia::clean()
{
	cout << "La Maglia e' ora pulita" << endl;
}

void Maglia::dress()
{
	cout << "Stai indossando la Maglia" << endl;
}

// Pantaloni

void Pantaloni::clean()
{
	cout << "Pantaloni sono ora puliti" << endl;
}

void Pantaloni::dress()
{
	cout << "Stai indossando i Pantaloni" << endl;
}

// Scarpe

void Scarpe::clean()
{
	cout << "Le scarpe sono ora pulite" << endl;
}

void Scarpe::dress()
{
	cout << "Stai indossando le scarpe" << endl;
}

// Costume

void Costume::clean()
{
	cout << "il costume e' ora pulito" << endl;
}

void Costume::dress()
{
	cout << "Stai indossando il costume" << endl;
}

// Cappotto

void Cappotto::clean()
{
	cout << "il cappotto e' ora pulito" << endl;
}

void Cappotto::dress()
{
	cout << "Stai indossando il cappotto" << endl;
}

/* kitindumenti.h */
/* abbigliamento.h */

// abbigliamento base
Poolkitindumenti* Getabbigliamentobase::getdresskitindumenti()
{
	Poolkitindumenti *pool = new Poolkitindumenti;
	Maglia *maglia = new Maglia;
	//maglia->clean();
	//maglia->dress();
	Pantaloni *pantaloni = new Pantaloni;
	//pantaloni->clean();
	//pantaloni->dress();
	Scarpe *scarpe = new Scarpe;
	//scarpe->clean();
	//scarpe->dress();
	pool->addCapoIntoPool(maglia);
	pool->addCapoIntoPool(pantaloni);
	pool->addCapoIntoPool(scarpe);
	
	return pool;
}
// abbigliamento invernale
Poolkitindumenti* Getabbigliamentoinvernale::getdresskitindumenti()
{ 
	Poolkitindumenti *pool = new Poolkitindumenti;
	// stuff
	return pool;
}
// abbigliamento estivo
Poolkitindumenti* Getabbigliamentoestivo::getdresskitindumenti()
{
	Poolkitindumenti *pool = new Poolkitindumenti;
	// stuff
	return pool;
}


int main()
{
	Getabbigliamentobase dress;
	Poolkitindumenti* pool = dress.getdresskitindumenti();

	Indumenti *i;
	i = pool->getHead();
	//if (pool->getHead()->getNext() != nullptr) { cout << "ciao" << endl; /*i->clean();*/ }
	while (i != nullptr)
	{
		i->clean();
		i->dress();
		i = i->getNext();
	}

	string NAME;
	getline(cin, NAME);
    return 0;
}


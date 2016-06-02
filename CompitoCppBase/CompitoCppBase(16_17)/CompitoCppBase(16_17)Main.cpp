// CompitoCppBase(16_17).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "CompitoCppBase(16_17).h"

int main()
{
	/*MyCppTestTree Example*/
	cout << "MyCppTestTree Example:" << endl;

	Leaf *my3 = new Leaf(3);
	Composite *my4 = new Composite(4);
	Leaf *my5 = new Leaf(5);

	Composite *my1 = new Composite(1);
	Composite *my2 = new Composite(2);

	my1->setLeftChildren(my2);
	my1->setRightChildren(my3);

	my2->setLeftChildren(my4);
	my2->setRightChildren(my5);

	BinaryTree *MyCppTestTree = new BinaryTree;
	MyCppTestTree->setRoot(my1);
	MyCppTestTree->ExecuteInorderSearch();

	cout << endl;
	cout << endl;

	/*MoreComplexTree Example*/
	cout << "MoreComplexTree Example:" << endl;

	Leaf *A = new Leaf(1);
	Leaf *C = new Leaf(3);
	Composite *E = new Composite(5);
	//Leaf *E = new Leaf(5);
	Leaf *H = new Leaf(8);

	Composite *F = new Composite(6);
	Composite *B = new Composite(2);
	Composite *G = new Composite(7);
	Composite *D = new Composite(4);
	Composite *I = new Composite(9);

	F->setLeftChildren(B);
	F->setRightChildren(G);

	B->setLeftChildren(A);
	B->setRightChildren(D);

	//G->setLeftChildren();
	G->setRightChildren(I);

	D->setLeftChildren(C);
	D->setRightChildren(E);

	I->setLeftChildren(H);
	//I->setRightChildren();

	BinaryTree *MyTree = new BinaryTree;
	MyTree->setRoot(F);
	MyTree->ExecuteInorderSearch();

	cout << endl;
	cout << endl;

	/*DELETE MyCppTestTree Example*/
	cout << "DELETE MyCppTestTree Example:" << endl;
	delete MyCppTestTree;

	cout << endl;
	cout << endl;

	/*DELETE MoreComplexTree Example*/
	cout << "DELETE MoreComplexTree Example:" << endl;
	delete MyTree;
	

	cout << endl;
	system("pause");
    return 0;
}


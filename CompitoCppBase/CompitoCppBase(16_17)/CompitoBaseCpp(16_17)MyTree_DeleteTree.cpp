
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "CompitoCppBase(16_17).h"

/*COMPOSITE*/

void Composite::setLeftChildren(Component* leftChildren)
{
	children[0] = leftChildren;
}

void Composite::setRightChildren(Component* rightChildren)
{
	children[1] = rightChildren;
}

Component* Composite::getLeftChildren() const
{
	return children[0];
}

Component* Composite::getRightChildren() const
{
	return children[1];
}

bool Composite::haveLeftChildren() const
{
	if (children[0])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Composite::haveRightChildren() const
{
	if (children[1])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Composite::haveChildren() const
{
	return (haveLeftChildren() || haveRightChildren());
}

/*LEAF*/

bool Leaf::haveChildren() const
{
	return false;
}

/*BINARYTREE*/

void BinaryTree::setRoot(Component * myRoot)
{
	if (!root)
		root = myRoot;
	else
	{
		cout << "Tree already has a Root!" << endl;
	}
}

Component* BinaryTree::getRoot()
{
	if (root)
	{
		return root;
	}
	else
	{
		cout << "Please set a Root for this Tree" << endl;
	}
}

void BinaryTree::ExecuteInorderSearch()
{
	if (root)
	{
		inOrderVisit(root);
	}
	else
	{
		cout << "No Search Available: Please set a Root for this Tree" << endl;
	}
}

/*Il Visit Richiesto*/

void BinaryTree::inOrderVisit(Component * node)													// iterativo
{
	std::stack<Component*> stackIter;												// pila puntatori a nodi

	stackIter.push(nullptr);														// condizione per terminare il loop

	while (!stackIter.empty() || node != nullptr)
	{
		if (node->haveChildren())
		{
			Composite *nodeComposite = static_cast<Composite*>(node);

			if (nodeComposite->haveLeftChildren())								// se ha solamente figlio sinistro 
			{
				if (nodeComposite->haveRightChildren())							// se ha figlio sia sinistro che destro
				{
					stackIter.push(nodeComposite->getRightChildren());
				}
				stackIter.push(nodeComposite);
				node = nodeComposite->getLeftChildren();
			}
			else if (nodeComposite->haveRightChildren())						// se ha solamente figlio destro
			{
				cout << "Node Number: " << node->getValue() << endl;
				node = nodeComposite->getRightChildren();
			}
		}
		else                                                                    // se non ha figli
		{
			cout << "Node Number: " << node->getValue() << endl;				// quando analizzo l'ultimo nodo lo stack puo'
			if (stackIter.top() != nullptr)										// avere 1 elemento o due:
			{																	// dovendo fare 2 pop() devo garantire di non
				cout << "Node Number: " << stackIter.top()->getValue() << endl; // poppare lo stack vuoto e che il node finale
				stackIter.pop();												// diventi nullptr: per questo all'inizio introduco
			}																	// un nullptr nello stack
			node = stackIter.top();
			stackIter.pop();
		}

	}

}

/*Il Delete Richiesto*/

BinaryTree::~BinaryTree()													//iterativo
{
	if (root)																// distruggo con algoritmo solo se root è settato
	{
		Component *node = root;
		std::stack<Component*> stackIter;									// pila puntatori a nodi

		stackIter.push(nullptr);											// condizione per terminare il loop

		while (!stackIter.empty() || node != nullptr)
		{
			if (node->haveChildren())
			{
				Composite *nodeComposite = static_cast<Composite*>(node);   //se ha figli è sicuramente un Composite
				stackIter.push(nodeComposite);								//se ha figli devo ancora cancellare una strada che parte da questo nodo:
																			//aggiungo allo stack questo nodo per potervi tornare una volta privo di figli

				if (nodeComposite->haveLeftChildren())						//prendo prima la via a sinistra se possibile
				{
					node = nodeComposite->getLeftChildren();
					nodeComposite->setLeftChildren(nullptr);			    // se prendo un ramo lo abbandono solo quando ho cancellato 
				}															// tutto quel che sta sotto,quando ritorno al nodo padre
																			// non deve essere più possibile percorrere quella via
				else if (nodeComposite->haveRightChildren())
				{
					node = nodeComposite->getRightChildren();
					nodeComposite->setRightChildren(nullptr);
				}

			}
			else
			{
				cout << "Node Number: " << node->getValue() << endl;
				delete node;												// cancello il nodo
				node = stackIter.top();										// torno al padre
				stackIter.pop();											// elimino il padre dallo stack,
																			// se il padre ha un'altro figlio verrà ri-introdotto in stack
																			// dal loop if(node->haveChildren())
			}
		}
	}
}
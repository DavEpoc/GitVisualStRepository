// CompitoCppBase(18).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include<iostream>
#include<assert.h>
using namespace std;
#include "CompitoCppBase(18).h"

void coutListValues(LinkedList *List)
{
	Node *tracker = List->getHead();
	cout << "Head: [" << tracker->getValue() << "]" << endl;
	cout << endl;

	cout << tracker->getValue() << endl;
	int size = List->getSize();
	for (int i = 1; i < size; ++i)
	{
		tracker = tracker->getNext();
		cout << tracker->getValue() << endl;
	}
}

void LinkedList::reverseAfter(Node *pHead,int iValue)
{
	assert(pHead->getValue() != iValue && "No Full reverse Allowed"); // se permettessi il reverse completo dovrei cambiare il puntatore Head
	Node* prev = nullptr;										      // della mia lista portandomi un puntatore del puntatore
	Node* current = pHead;											  // oppure fare swap dei contenuti in memoria e ho bisogno di un nodo di supporto
	Node* breakingPoint = nullptr;

	while (current != nullptr && current->getValue() != iValue)
	{
		breakingPoint = current;
		current = current->getNext();
	}

	Node* next;
	while (current != nullptr)
	{
		next = current->getNext();
		current->setNext(prev);
		prev = current;
		current = next;
	}
		breakingPoint->setNext(prev);

	if(prev == nullptr)
	{
		cout << "Invalid Reverse Starting Node Value" << endl;
	}
}

int main()
{
	LinkedList myLinkedList1;
	LinkedList myLinkedList2;
	for (int i = 0; i < 5; ++i)
	{
		myLinkedList1.addNode(new Node);
	}
	for (int i = 0; i < 10; ++i)
	{
		myLinkedList2.addNode(new Node);
	}

	coutListValues(&myLinkedList1);
	cout << endl;
	coutListValues(&myLinkedList2);
	cout << endl;

	LinkedList::reverseAfter(myLinkedList1.getHead(), 2);
	LinkedList::reverseAfter(myLinkedList2.getHead(), 5);

	coutListValues(&myLinkedList1);
	cout << endl;
	coutListValues(&myLinkedList2);


	cout << endl;
	system("pause");
    return 0;
}


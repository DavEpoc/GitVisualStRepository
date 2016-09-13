
#include "stdafx.h"
#include<iostream>
#include<assert.h>
using namespace std;
#include "CompitoCppBase(18).h"

/*NODE*/

Node::Node()
{
	value = -1;
	next = nullptr;
}

Node::Node(int iValue, Node *oNext) // non lo uso ma è sensato metterlo
{
	value = iValue;
	next = oNext;
}

Node::~Node()
{
	if (next)
	{
		delete next;
	}
}

int Node::getValue() const
{
	return value;
}

Node* Node::getNext() const
{
	return next;
}

void Node::setValue(int iValue)
{
	value = iValue;
}

void Node::setNext(Node *newNode)
{
	next = newNode;
}

/*LINKEDLIST*/

LinkedList::LinkedList()
{
	Head = nullptr;
	size = 0;
}

LinkedList::~LinkedList()
{
	if (Head)
	{
		delete Head;
	}
}

int LinkedList::getSize() const
{
	return size;
}

Node* LinkedList::getHead() const
{
	return Head;
}

void LinkedList::addNode(Node* newNode)
{
	newNode->setNext(Head);
	newNode->setValue(size);
	Head = newNode;
	++size;
}
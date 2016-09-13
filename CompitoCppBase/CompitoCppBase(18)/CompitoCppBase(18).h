#pragma once 

/*NODE*/

class Node
{
public:

	int getValue() const;
	Node* getNext() const;

	void setValue(int iValue);
	void setNext(Node *newNode);

	Node();
	Node(int iValue, Node *oNext);

	Node(const Node &other) = delete;
	const Node &operator=(Node rhs) = delete;
	~Node();

private:
	Node *next;
	int value;

};

/*LINKEDLIST*/

class LinkedList
{
public:
	LinkedList();
	LinkedList(const LinkedList &other) = delete;							
	const LinkedList &operator=(LinkedList rhs) = delete;					
	~LinkedList();

	int getSize() const;
	Node* getHead() const;

	void addNode(Node* newNode);
	static void reverseAfter(Node *pHead, int iValue);
private:
	Node* Head;
	int size;
};


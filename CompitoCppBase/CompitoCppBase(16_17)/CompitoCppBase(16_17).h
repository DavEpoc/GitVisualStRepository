#pragma once
#include <stack>

/*COMPONENT*/

class Component
{
private:
	int value;
public:
	Component(int iValue)
	{
		value = iValue;
	}

	virtual bool haveChildren() const = 0;
	int getValue() const
	{	
		return value;
	}
};

/*COMPOSITE*/

class Composite : public Component
{
private:
	Component* children[2];
public:
	Composite(int iValue) : Component(iValue)
	{
		children[0] = nullptr;
		children[1] = nullptr;
	}
	void setLeftChildren(Component* leftChildren);
	void setRightChildren(Component* rightChildren);
	Component* getLeftChildren() const;
	Component* getRightChildren() const;
	bool haveLeftChildren() const;
	bool haveRightChildren() const;
	bool haveChildren() const;
};

/*LEAF*/

class Leaf : public Component
{
public:
	Leaf(int iValue) : Component(iValue) {}

	bool haveChildren() const;
};

/*BINARYTREE*/

class BinaryTree
{
public:
	
	BinaryTree() : root(nullptr) {}
	BinaryTree(const BinaryTree &other) = delete;
	const BinaryTree &operator=(BinaryTree rhs) = delete;
	~BinaryTree();

	void setRoot(Component * myRoot);
	Component* getRoot();
	void ExecuteInorderSearch();

private: 
	Component* root;							

	void inOrderVisit(Component * node);												// iterativo


};


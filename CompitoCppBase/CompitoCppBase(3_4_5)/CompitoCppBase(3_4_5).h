#pragma once
/*ESERCIZIO 5*/

// Il costruttore della classe base viene chiamato prima del costruttore della classe derivata -> output: 13
// viceversa il distruttore della classe derivata viene chiamato prima di quello della classe base -> output: 42
class A
{
public:
	A()
	{
		std::cout << 1;
	}
	~A()
	{
		std::cout << 2;
	}
};

class B : public A
{
public:
	B()
	{
		std::cout << 3;
	}
	~B()
	{
		std::cout << 4;
	}
};
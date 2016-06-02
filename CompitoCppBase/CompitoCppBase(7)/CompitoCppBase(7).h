#pragma once
class Faa{};

/*REFACTORING*/

//cosa s'intende per interfaccia?
//1) la classe base da cui si parte? allora dovrei riscriverre solo Fii,senza tra l'altro
//   cambiare le proprietà,non appartenenti all'interfaccia.
//   inoltre non è necessario per i metodi avere un nome per i parametri passati basta il tipo
//2) intendo tutta la struttura su cui mi baso senza alcuna implementazione,io ho inteso in questo modo

class Fii
{
public:   
	Fii(float x, float y, float z);						// ctor

	// rule of three
	Fii(const Fii &other) {};							// copy constructor
	const Fii &operator=(Fii rhs) {};					// assignment operator
	~Fii();											    // de-ctor

private:
	float *m_fVec;  
};

class Foo : public Fii
{
public:
	Foo(float x, float y, float z) : Fii(x,y,z) {};	    // ctor
	~Foo();												// de-ctor

	void data(Faa *oObj);   
	inline int fastSum(const int &iNum1, const int &iNum2) const;
	int sum(int iNum1, int iNum2) const;
	inline int getNumber() const;
	inline const Fii* getObject() const;

	Foo operator+(int iNumb);
	Foo &operator+=(const Foo &oObj);

private:
	int m_iNumber;
	Fii *m_oObj;
};

/*ORIGINALE*/
/*
class Fii
{
public:   // rule of three
Fii();
~Fii(); // virtual?
private:
float *vec;  // nome variabile sensato
};

class Foo : public Fii
{
public:
Foo(); // call base  constr

void Data(Faa *f);   // nomi metodi minuscoli
int FastSum(int l, int r);
int Sum(int l, int r);
int GetNumber(); // const?
const Fii GetObject();

friend Foo operator+(int a, Foo &f);
Foo &operator+=(const Foo &f);

~Foo();

private:
int num;
Fii *obj;
};
*/
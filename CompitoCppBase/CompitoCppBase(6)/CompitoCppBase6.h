#pragma once
#include <iostream>
using namespace std;

class Car
{
public:
	Car(float speed, int kw);								// 1) ctor
	Car(Car &car);											// 2) copy ctor
	Car(Car *car) { cout << "3" << endl; }					// 3) can do same of copy ctor but it isnt
	Car &operator=(const Car &car)							// 4) assignment operator
	{ 
		m_dSpeed = car.m_dSpeed;
		m_iKw = car.m_iKw;
		cout << "4" << endl; 
		return *this;
	}	
	virtual ~Car();											// 5) de-ctor

	int getKw() const { return m_iKw; }

protected:
	float m_dSpeed;
	int m_iKw;
};

Car::Car(float speed, int kw)
{
	m_dSpeed = speed;
	m_iKw = kw;
	cout << "1" << endl;
}

Car::Car(Car &car) : m_dSpeed(car.m_dSpeed), m_iKw(car.m_iKw)
{
	cout << "2" << endl;
}

Car::~Car()
{
	cout << "5" << endl;
}
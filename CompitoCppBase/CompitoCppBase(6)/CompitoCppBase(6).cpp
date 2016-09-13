// CompitoCppBase(6).cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include "CompitoCppBase6.h"


int main(int argc, const char* argv[])
{
	//il copy constructor viene chiamato quando viene creato un nuovo oggetto a partire da uno esistente
	//l'assignment operator viene chiamato quando ad un oggetto esistente viene riassegnato ai valori di un altro oggetto esistente

	Car car1(180, 200);				//1
	Car *pCar1 = &car1;				// pCar1 punta all'indirizzo di car1
	Car car2 = car1;				//2 
	Car *pCar2 = new Car(pCar1);	//3 essendo passato un puntatore overrida il copy constructor
	Car *pCar3 = pCar1;				// pCar3 punta dove punta pCar1 cioè all'indirizzo di car1 
	Car car3 = *pCar2;				//2
	pCar1 = pCar3;					// pCar1 punta dove punta pCar3 cioè all'indirizzo di car1
	car1 = *pCar1;					//4 anche se lo riassegno a se stesso l'assignment operator viene chiamato!

	system("pause");
    return 0;
}


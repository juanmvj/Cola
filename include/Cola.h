/**
Nombre(s): Juan Manuel Vazquez Jimenez
Descripcion: La clase Cola, con atributos y metodos necesarios 
para esta estructura de datos funcione como debe de ser.
*/

#include "Nodo.h"

class Cola
{
public:
	//atributos
	Nodo* H;
	Nodo* T;
	//constructores
	Cola();
	Cola(int Dato);
	//metodos
	void Encolar(int Dato);
	int DesEncolar();
	void Show();
	bool ColaVacia();
	void VaciarCola();
	
};
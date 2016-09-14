/**
Nombre(s): Juan Manuel Vazquez Jimenez
*/
#include "Cola.h"
/**
creamos una Cola vacia.
@params void
@result void
*/
Cola::Cola()
{
	this->H = NULL;
	this->T = NULL;
}
/**
creamos una Cola con un elemento
@params Dato
@result void
*/
Cola::Cola(int Dato)
{
	Nodo *aux = new Nodo(Dato);
	this->H = aux;
	this->T = aux;
}

/**
verificamos si una Cola esta vacia.
@params void
@result bool
*/
bool Cola::ColaVacia()
{
	if (this->H == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/**
aregamos un elemento al final de la cola
@params Dato
@reult void
*/
void Cola::Encolar(int Dato)
{
	Nodo *aux = new Nodo(Dato,this->H);
	this->H = aux;
}
/**
elimina y guarda el dato del primer elemnto de la cola
@params void
@reult int
*/
int Cola::DesEncolar()
{
	if (!ColaVacia())
	{
		int Dato = this->H->getDato();	
	if (this->H == NULL)
	{
		this->T = NULL;
	}
	this->H = this->H->getSig();
	return Dato;
	}
	else
	{
		std::cout<<"cola vacia"<<std::endl;		
	}
}

/**
Vaciamos la cola 
@params void
@reult void
*/
void Cola::VaciarCola()
{
	if (ColaVacia())
	{
		std::cout<< "cola vacia " <<std::endl;
		
	}
	else
	{
		this->H = NULL;
		this->T = NULL;
	}
}
/**
muestra todos los elementos
@params void
@reult void
*/
void Cola::Show()
{
	if(ColaVacia())
	{
		std::cout<<"cola vacia"<<std::endl;
		return;
	}
	Nodo *aux = this->H;
	while(aux != NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}

}


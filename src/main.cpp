/**
Nombre(s): Juan Manuel Vazquez Jimenez
*/

#include "Cola.h"


int main()
{
	Cola c = Cola(4);
	c.Encolar(1);
	c.DesEncolar();
	c.Encolar(3);
	c.Encolar(2);
	c.Encolar(6);
	c.Show();

	return 0;
}
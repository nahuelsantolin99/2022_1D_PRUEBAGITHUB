
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	int edad;
	int peso;
	char letra;
	int respuesta;

	setbuf(stdout,NULL);

	respuesta = utn_getCaracter(&letra,"Letra?\n","Error. La letra debe ser desde A a J\n",'A','J',1);
	if(respuesta == 0)
	{
		printf("La letra es: %c",letra);
	}
	else
	{
		printf("\nERROR");
	}

	respuesta = utn_getNumero(&edad,"\nEdad?\n","Error. La edad debe ser desde 0 a 199\n",0,199,2);
	if(respuesta == 0)
	{
		printf("La edad es: %d",edad);
	}
	else
	{
		printf("\nERROR");
	}

	respuesta = utn_getNumero(&peso,"\nPeso?\n","Error. El peso debe ser desde 0 a 500\n",0,500,3);
	if(respuesta == 0)
	{
		printf("El peso es: %d",peso);
	}
	else
	{
		printf("\nERROR");
	}

	return EXIT_SUCCESS;
}


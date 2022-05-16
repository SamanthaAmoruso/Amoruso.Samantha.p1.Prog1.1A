/*
 ============================================================================
 Name        : prueba1Prog1.2022
 Author      : Sami
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define TAM 5

typedef struct
{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
    int isEmpty;
}eVacuna;

float aplicarAumento(float valor);
int remplazarCharacteres(char palabra[],char unaLetra, char otraLetra);
//void ordenarVacunas(eVacuna vacuna[], int tam);


int main()
{
	setbuf(stdout,NULL);
	fflush(stdin);

    /**********************************************************************************************************
    3)
    3. Dada la siguiente estructura generar una función que permita ordenar un array de dicha
    estructura por tipo. Ante igualdad de tipo deberá ordenarse por efectividad creciente.
    Hardcodear datos y mostrarlos desde el main.
    */

    eVacuna vacuna[TAM] =
        {
            {1000, "Hepatitis", 'a', 3000},
            {1001, "Hepatitis", 'a', 5500},
            {1002, "Antigripal", 'b', 5000},
            {1003, "Varicela", 'b', 2200},
			{1004, "VIH", 'c', 67000}

        };

    //ordenarVacunas(vacuna, TAM);

    printf(" ID        nombre       tipo         efectividad\n\n");
	for(int i = 0; i < TAM; i++)
	{
		printf(" %d     %10s         %c      %.2f\n",  vacuna[i].id, vacuna[i].nombre , vacuna[i].tipo , vacuna[i].efectividad);
	}

    /*********************************************************************************************************
     1)
     1. Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto
     y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.
     */

	printf("\nFuncion que hace el aumento del 5 por ciento\n");
	float precio = 200;
	float nuevoPrecioProductoDos;

	nuevoPrecioProductoDos = aplicarAumento(precio);
	if (precio > 0)
	{
		printf("El precio es de %.2f. El precio con un aumento del 5 por ciento queda en un total de: %.2f \n\n", precio, nuevoPrecioProductoDos);
	}
	else
	{
		printf("Error, no se puede calcular el aumento con un precio menor a 0\n");
	}

	/*********************************************************************************************
	 2) no llego a pasarlo al main

	 */

return 0;
}//fin main

//Ejercicio nro 3

/*void ordenarVacunas(eVacuna vacuna[], int tam)
{
	eVacuna auxNote;

	if( vacuna !=NULL && tam > 0)
	{
		for(int i=0; i<tam-1; i++)
		{
			for(int j=i+1; j<tam; j++)
			{
				if(strcmp(vacuna[i].tipo, vacuna[j].tipo) > 0)
				{
					auxNote = vacuna[i];
					vacuna[i] = vacuna[j];
					vacuna[j] = auxNote;
				}
				else if((strcmp(vacuna[i].tipo, vacuna[j].tipo) == 0) && (vacuna[i].efectividad < vacuna[j].efectividad))
				{
					auxNote = vacuna[i];
					vacuna[i] = vacuna[j];
					vacuna[j] = auxNote;
				}//fin else if

			}//fin for j

		}//fin for i

	}//fin if null

}//fin funcion*/

//ejercicio 1
float aplicarAumento(float precio)
{
    float precioFinal;
    float interes = 0.05;

    precioFinal = precio + (precio * interes);

return precioFinal;
}

int remplazarCharacteres(char palabra[],char unaLetra, char otraLetra)
{
    int i;
    int lenght;
    int contador = 0;

    lenght = strlen(palabra);

    for(i = 0; i < lenght; i++)
    {
        if(tolower(palabra[i]) == tolower(unaLetra))
        {
            palabra[i] = otraLetra;
            contador++;
        }
    }
    if(contador != 0)
    {
        printf("%s\n", palabra);
    }

return contador;
}

//-----------------------------------------------------------------------------------//
// Nom du projet 		: Ex6
// Nom du fichier 		: Ex06
// Date de création 	: 21.11.2025
// Date de modification : 
//
// Auteur 				: Steeve.Pouly
//
// Version				: 0.1
//
// Description          : 
//
//
// Remarques :          
//----------------------------------------------------------------------------------//
//-- librairie standard --//
#include <stdio.h>  //-- <> utilisé pour le standard --//
#include <iostream>

// Déclaration variables
unsigned char ValA = 1;
unsigned char ValB = 6;
char ValB1;
float ValB2;

int main(void)
{

	if (ValA > 9)
	{
		printf("ValA limittee a 9 ! \n");
	}
	else if (ValA == 0)
		{
		ValA = 1;
		printf("TestA: ValA forcee a 1 ! \n");
		}
		else if (ValA < 0)
			{
			printf(" %d \n",ValA );	
			}
			else
				{
				printf(" TestA: ValA est negatif ! \n");
				}



	if (ValB >= 0 && ValB <= 9 )
	{
		for (char i = 0; i < ValB; i++)
		{
			ValB1 = 100 + 10 * i;
			ValB2 = ValB1 / 1000;

			printf("TestB: i= %d ValB1 = %d Valb2 = %3f \n", i, ValB1, ValB2);
		}
	}
	else
	{
		printf(" TestB: ValB n est pas entre 0 et 9 \n");
	}
	

	return(0);
}

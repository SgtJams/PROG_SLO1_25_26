//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 21.11.2025
// Date de modification : 
//
// Auteur 				: Pouly Steeve
//                       
//
// Version 				: 0.1
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf


int main(void)
{
	// Déclaration cas A
	short A1 = 400;
	short A2 = 500;
	// Déclaration cas B
	unsigned short ValB = 0x1234;
	// Déclaration cas C
	unsigned short C1 = 0x5555;
	unsigned short C2 = 0x0F0F;
	// Déclaration cas D
	short D1 = 1325;
	short D2 = 7;
	// Traitement cas A
	printf ("Traitement cas A \n");

	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2);
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n",A1, A2);
	
	//ca ne marche pas a cause du mauvais type de variables utilisé pour A1 et A2//

	// Traitement cas B
	printf ("Traitement cas B \n");

	printf ("ValB  % HighValB = %2x LowValB = %\n",ValB,ValB, ValB);
	//dans le printf il manque du code pour déterminer les bit de poid faibles et fort//

	// Traitement cas C
	printf ("Traitement cas C \n");

	printf ("ResC = %  OU % =  % \n",C1, C2);
	printf ("ResC = %  ET % =  %0 \n",C1, C2);

	//dans le printf il manque les symbole && et || pour afficher les bonne valeurs//

	// Traitement cas D

	printf ("Traitement cas D \n");

	printf ("Division de %4d par %4d = %4d Reste = %4d \n",D1, D2);
	//dans le printf il manque les symbole //

  return(0);
}

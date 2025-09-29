// ceci est un comentaire sur une ligne
/*
Ceci est un commentaire sur plusieur ligne
Ici doit ce trouver un cartouche (exemple dans onedrive/support de cours/canevas)

*/

//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: demo.c
// Date de création 	: 29.09.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Steeve.Pouly
//
// Version				: 0.1
//
// Description          : demo cours prog sur utilisation visualstudio
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//
//-- librairie standard --//
#include <stdio.h>  //-- <> utilisé pour le standard --//

//-- librairie perso --//
//-- #include "" //-- ""utilisé pour le perso --//

//-- définition --//
#define FOIX_2 2 //--défine n'occupe pas de place mémoire --//
#define PI 3.14
//-- constante globale --//


//--programme principale => main = fonction--//
//--nom de la fct: main
//--paramètre entrée: -
//--paramètre sortie: - (obliger de mettre void)
//--paramètre IN-OUT: -
//--description: programme principal =>
void main()
{
    //-- constante --//
    //-- réel
    //-- a éviter -> si possible -> raison prend de la place dans la gestion de la mémoire --//
    /*const float PI_v1 = 3.14;
    const float FOIX_2_2 = 2;*/

    //-- déclaration des variables --//
    //--
    
    //--Reel
    float rayon_m = 10;     //_m => mètre
                            //--cast implicite -> entier -> reel --//
    float perimetre1_m; float perimetre2_m;

    //--une instruction est composé d'opérandes (variable) et d'opérante (signe) --//
    //--perimetre_m = 2 * PI_v1 * rayon_m; //-- 2 est vue comme une constante (hardcodage)--//
    //--cast => (type)variable
    perimetre1_m = (float)FOIX_2 * (float)PI * rayon_m; 
    
    //-- attention au cast implicite 
    perimetre2_m = (float)(FOIX_2 * PI * rayon_m); //-- met la valeur du résultat en float --//

    //-- appel de fct
    //--> printf
    printf("%f \n %f", perimetre1_m, perimetre2_m); //-- Pour afficher du texte, utilisé "" pour obtenir le code ascii --//-- "%f",tu recois un parametre de convertion float pour lier la variable a l'affichage --// --\r pour le retour a la ligne(retour chariot)
 
}

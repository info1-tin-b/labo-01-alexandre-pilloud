/**
 * Euclidean Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h>                // inclut la librairie standard contenant les fonctions d'allocation memoire, de conversion et autres. Elle contient la fonction atoi
#include <stdio.h>                 // inclut la librairie standard d'entree/sortie contenant les fonctions printf, scanf, etc. Elle est utilisée pour afficher le résultat avec printf.

int gcd(int a, int b) {            // fonction qui calcule le pgcd de a et b
  int r;                           // définition d'une variable r pour stocker le reste
  while (b != 0) {                 // la boucle reste active tant que b n'est pas nul              
    r = a % b;                     // calcul du reste de la division euclidienne de a par b avec l'opérateur modulo %
    a = b ;                        // écriture dans a de la valeur de b
    b = r;                         // écriture dans b de la valeur du reste
  }                                // fin de la boucle while
  return a;                        // retourne la valeur de a, le pgcd de a et b
}                                  // fin de la fonction gcd
                        
int main(int argc, char* argv[]) { // définition de la fonction principale
    if (argc <= 2) {               // si le nombre d'arguments est inférieur ou égal à 2
        return -1;                 // on quitte le programme avec un code d'erreur
    }                              // fin de la fonction if

    int a = atoi(argv[1]);         // lecture du premier argument en entier, conversion du premier argument en entier
    int b = atoi(argv[2]);         // fonction atoi convertit une chaine de caracteres en entier, conversion du deuxième argument en entier

    int result = gcd(a, b);        // appel de la fonction gcd avec a et b, et stockage du résultat dans result 

    printf("%d\n", result);        // affichage du résultat

    return 0;                      // fin de la fonction main sans erreur
}

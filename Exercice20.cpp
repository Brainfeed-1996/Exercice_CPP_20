/*
Afficher toutes les manières possibles d’obtenir un euro avec des pièces de 2 cents, 5 cents et 10 cents. Dire combien de possibilités ont été ainsi trouvées.
Rappelons que l’insertion dans le flot cout d’une expression de la forme setw(n, où n est une expression entière, demande de réaliser l’affichage suivant (et uniquement ce dernier) sur n caractères au minimum. L’emploi de setw nécessite l’inclusion du fichier iomanip.
*/

#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    int nbf ; // compteur du nombre de façons de faire 1 euro
    int n10 ; // nombre de pièces de 10 centimes
    int n5 ; // nombre de pièces de 5 centimes
    int n2 ; // nombre de pièces de 2 centimes
    nbf = 0 ;
    for (n10=0 ; n10<=10 ; n10++)
    for (n5=0 ; n5<=20 ; n5++)
    for (n2=0 ; n2<=50 ; n2++)
    if ( 2*n2 + 5*n5 + 10*n10 == 100)
        { nbf ++ ;
        cout << "1 euro = " ;
        if (n2) cout << setw(2) << n2 << " X 2c " ;
        if (n5) cout << setw(2) << n5 << " X 5c " ;
        if (n10) cout << setw(2) << n10 << " X 10c " ;
        cout << "\n" ;
    }
    cout << "\nEn tout, il y a " << nbf << " façons de faire 1 euro\n" ;
}

/* Résultat :
1 euro = 50 X 2c 
1 euro = 45 X 2c  2 X 5c 
1 euro = 40 X 2c  4 X 5c 
1 euro = 35 X 2c  6 X 5c 
1 euro = 30 X 2c  8 X 5c 
1 euro = 25 X 2c 10 X 5c 
1 euro = 20 X 2c 12 X 5c 
1 euro = 15 X 2c 14 X 5c 
1 euro = 10 X 2c 16 X 5c 
1 euro =  5 X 2c 18 X 5c 
1 euro = 20 X 5c 
1 euro = 45 X 2c  1 X 10c 
1 euro = 40 X 2c  2 X 5c  1 X 10c 
1 euro = 35 X 2c  4 X 5c  1 X 10c 
1 euro = 30 X 2c  6 X 5c  1 X 10c 
1 euro = 25 X 2c  8 X 5c  1 X 10c 
1 euro = 20 X 2c 10 X 5c  1 X 10c 
1 euro = 15 X 2c 12 X 5c  1 X 10c 
1 euro = 10 X 2c 14 X 5c  1 X 10c 
1 euro =  5 X 2c 16 X 5c  1 X 10c 
1 euro = 18 X 5c  1 X 10c 
1 euro = 40 X 2c  2 X 10c 
1 euro = 35 X 2c  2 X 5c  2 X 10c 
1 euro = 30 X 2c  4 X 5c  2 X 10c 
1 euro = 25 X 2c  6 X 5c  2 X 10c 
1 euro = 20 X 2c  8 X 5c  2 X 10c 
1 euro = 15 X 2c 10 X 5c  2 X 10c 
1 euro = 10 X 2c 12 X 5c  2 X 10c 
1 euro =  5 X 2c 14 X 5c  2 X 10c 
1 euro = 16 X 5c  2 X 10c 
1 euro = 35 X 2c  3 X 10c 
1 euro = 30 X 2c  2 X 5c  3 X 10c 
1 euro = 25 X 2c  4 X 5c  3 X 10c 
1 euro = 20 X 2c  6 X 5c  3 X 10c 
1 euro = 15 X 2c  8 X 5c  3 X 10c 
1 euro = 10 X 2c 10 X 5c  3 X 10c 
1 euro =  5 X 2c 12 X 5c  3 X 10c 
1 euro = 14 X 5c  3 X 10c 
1 euro = 30 X 2c  4 X 10c 
1 euro = 25 X 2c  2 X 5c  4 X 10c 
1 euro = 20 X 2c  4 X 5c  4 X 10c 
1 euro = 15 X 2c  6 X 5c  4 X 10c 
1 euro = 10 X 2c  8 X 5c  4 X 10c 
1 euro =  5 X 2c 10 X 5c  4 X 10c 
1 euro = 12 X 5c  4 X 10c 
1 euro = 25 X 2c  5 X 10c 
1 euro = 20 X 2c  2 X 5c  5 X 10c 
1 euro = 15 X 2c  4 X 5c  5 X 10c 
1 euro = 10 X 2c  6 X 5c  5 X 10c 
1 euro =  5 X 2c  8 X 5c  5 X 10c 
1 euro = 10 X 5c  5 X 10c 
1 euro = 20 X 2c  6 X 10c 
1 euro = 15 X 2c  2 X 5c  6 X 10c 
1 euro = 10 X 2c  4 X 5c  6 X 10c 
1 euro =  5 X 2c  6 X 5c  6 X 10c 
1 euro =  8 X 5c  6 X 10c 
1 euro = 15 X 2c  7 X 10c 
1 euro = 10 X 2c  2 X 5c  7 X 10c 
1 euro =  5 X 2c  4 X 5c  7 X 10c 
1 euro =  6 X 5c  7 X 10c 
1 euro = 10 X 2c  8 X 10c 
1 euro =  5 X 2c  2 X 5c  8 X 10c 
1 euro =  4 X 5c  8 X 10c 
1 euro =  5 X 2c  9 X 10c 
1 euro =  2 X 5c  9 X 10c 
1 euro = 10 X 10c 

En tout, il y a 66 façons de faire 1 euro
*/

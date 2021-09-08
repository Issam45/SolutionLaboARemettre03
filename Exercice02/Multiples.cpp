// But : Écrire un prog qui demande à l'utilisateur de rentrer trois entiers et indique si nb3 est compris entre nb1 et nb2 ou nb3 est compris entre nb3 et  nb2
// Auteur :	Issam Abdelkrim
// Date : 2021-09-07

#include <iostream>
using namespace std;

int main()
{
   int nb1;

   setlocale(LC_ALL, "");

   cout << "Ce programme demande à l'utilisateur de rentrer un nombre entier \net affiche s'il est un multiples de deux, de trois ou des deux ou d'aucun. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999)!!" << endl;

   cout << "\t \t -------------------------------Exercie Multiples------------------------------- \n";

   // Demander à l'utilisateur de rentrer un nombre entier
   cout << "Rentrer un nombre entier: ";

   cin >> nb1; // Stocker le nombre dans une variable

   cout << endl;

   while (nb1 != 9999) // Tant que nb1 n'est pas égale à (9999) continuer à rentrer dans la boucle
   {
      if (nb1 % 2 == 0 && nb1 % 3 == 0) // Si le nmb 1 modulo 2 est égale à zéro et que modulo 3 aussi est égale à zéro alors rentré (représente que c'est à la fois un multiple de 2 et de 3 )
      {
         cout << nb1 << " est un multiple de 2 et de 3!" << endl; // Afficher un message qui dit que le nmb 1 est un multiple de 2 et de 3

         system("pause"); // Mettre une pause
         system("cls"); // Effacer l'écran

         cout << "Ce programme demande à l'utilisateur de rentrer un nombre entier \net affiche s'il est un multiples de deux, de trois ou des deux ou d'aucun. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999)!!" << endl;

         cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

         // Demander à l'utilisateur de rentrer un nombre entier
         cout << "Rentrer un nombre entier: ";

         cin >> nb1; // Stocker le nombre dans une variable

         cout << endl;
      }

      else if (nb1 % 2 != 0 && nb1 % 3 != 0) // Si le nmb 1 modulo 2 n'est pas égale à zéro et que modulo 3 aussi n'est pas égale à zéro alors rentré (représente que ce n'est ni un multiple de 2, ni de 3)
      {
         cout << nb1 << " n'est ni un multiple de 2, ni de 3!" << endl; // Affiche que nb1 n'est pas un multiple de 2, ni de 3

         system("pause");
         system("cls");

         cout << "Ce programme demande à l'utilisateur de rentrer un nombre entier \net affiche s'il est un multiples de deux, de trois ou des deux ou d'aucun. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999)!!" << endl;

         cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

         // Demander à l'utilisateur de rentrer un nombre entier
         cout << "Rentrer un nombre entier: ";

         cin >> nb1; // Stocker le nombre dans une variable

         cout << endl;
      }

      else if (nb1 % 2 == 0) // Si nmb 1 modulo 2 est égale à zéro rentré, représente que nmb 1 est un multiple de 2
      {
         cout << nb1 << " est un multiple de 2!" << endl; // Affiche que nmb 1 est un multiple de 2

         system("pause");
         system("cls");

         cout << "Ce programme demande à l'utilisateur de rentrer un nombre entier \net affiche s'il est un multiples de deux, de trois ou des deux ou d'aucun. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999)!!" << endl;

         cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

         // Demander à l'utilisateur de rentrer un nombre entier
         cout << "Rentrer un nombre entier: ";

         cin >> nb1; // Stocker le nombre dans une variable

         cout << endl;
      }

      else // sinon nmb 1 est indirèctement un multiple de 3
      {
         cout << nb1 << " est un multiple de 3!" << endl; // Affiche que nmb 1 est un multiple de 3

         system("pause");
         system("cls");

         cout << "Ce programme demande à l'utilisateur de rentrer un nombre entier \net affiche s'il est un multiples de deux, de trois ou des deux ou d'aucun. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999)!!" << endl;

         cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

         // Demander à l'utilisateur de rentrer un nombre entier
         cout << "Rentrer un nombre entier: ";

         cin >> nb1; // Stocker le nombre dans une variable

         cout << endl;
      }

   }

   system("pause");
   return 0;

}

/*    Plans de tests

1.    nb1            réponse à l'écran

2.    12               12 est un multiple de 2 et de 3

3.    3                3 est un multiples de 3

4.    2               2 est un multiples de 2

5.    -1              -1 n'est ni un multiple de 2, ni de 3

6.    -3               3 est un multiples de 3

7.   -12              12 est un multiple de 2 et de 3

8.    -4               -4 est un multiples de 2

9.   -21              -21 est un multiples de 3

10. Vérifier qu'il n'y a pas de boucle infini

11. Rentrer 9999 comme première valeur et rentrer n'importe quel autre valeur pour les deux autres nombres afin de quitter!

12. Rentrer une lettre et le prog ne fonctionne plus.
*/
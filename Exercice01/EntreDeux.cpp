// But : Écrire un prog qui demande à l'utilisateur de rentrer trois entiers et indique si nb3 est compris entre nb1 et nb2 ou nb3 est compris entre nb3 et  nb2
// Auteur :	Issam Abdelkrim
// Date : 2021-09-07

#include <iostream>
using namespace std;

int main()
{
   //Initialiser les variables à utiliser 
   int nb1; 
   int nb2;
   int nb3;

   setlocale(LC_ALL, "");

   cout << "Ce programme demande à l'utilisateur de rentrer trois entiers \net indique si nb3 est compris entre nb1 et nb2 ou nb3 est compris entre nb3 et  nb2. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour la première valeur et n'importe quel valeur pour les autres nombres!!" << endl;

   cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

   // Demander à l'utilisateur de rentrer un nombre entier
   cout << "Rentrer un nombre entier: ";

   cin >> nb1; // Stocker le nombre dans une variable

   cout << endl; // Passer la ligne

   cout << "Rentrer un deuxième nombre entier: ";

   cin >> nb2; // Stocker le nombre dans une variable

   cout << endl;

   cout << "Rentrer un troisième nombre entier: ";

   cin >> nb3; // Stocker le nombre dans une variable

   cout << endl;

   while (nb1 != 9999) // Tant que nb1 n'est pas égale à (9999) continuer à rentrer dans la boucle
   {

      if (nb3 > nb1 && nb3 < nb2) // Si nb3 est plus grand que nb1 et à la fois plus petit que nb2 effectuer les fonctions suivantes
      {
         cout << nb3 << " est compris entre " << nb1 << " et " << nb2;

         cout << endl;

         system("pause"); // Mettre une pause
         system("cls"); // Effacer ce qui se retrouve à l'écran

         cout << "Ce programme demande à l'utilisateur de rentrer trois entiers \net indique si nb3 est compris entre nb1 et nb2 ou nb3 est compris entre nb3 et  nb2. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999) pour la première valeur et n'importe quel valeur pour les autres nombres!!" << endl;

         cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

         // Demander à l'utilisateur de rentrer un nombre entier
         cout << "Rentrer un nombre entier: ";

         cin >> nb1;

         cout << endl;

         cout << "Rentrer un deuxième nombre entier: ";

         cin >> nb2;

         cout << endl;

         cout << "Rentrer un troisième nombre entier: ";

         cin >> nb3;

         cout << endl;

      }

      else if (nb3 < nb1 && nb3 > nb2) // Et si nb3 est plus petit que nb1 et à la fois plus grand que nb2 effectuer les fonctions suivantes
      {
         cout << nb3 << " est compris entre " << nb2 << " et " << nb1;

         cout << endl;

         system("pause");
         system("cls");

         cout << "Ce programme demande à l'utilisateur de rentrer trois entiers \net indique si nb3 est compris entre nb1 et nb2 ou nb3 est compris entre nb3 et  nb2. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999) pour la première valeur et n'importe quel valeur pour les autres nombres!!" << endl;

         cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

         // Demander à l'utilisateur de rentrer un nombre entier
         cout << "Rentrer un nombre entier: ";

         cin >> nb1;

         cout << endl;

         cout << "Rentrer un deuxième nombre entier: ";

         cin >> nb2;

         cout << endl;

         cout << "Rentrer un troisième nombre entier: ";

         cin >> nb3;

         cout << endl;

      }

      else // Autrement effectuer les instructions suivantes
      {
         cout << nb3 << " ne se situe pas entre les deux autres nombres entiers!";

         cout << endl;

         system("pause");
         system("cls");

         cout << "Ce programme demande à l'utilisateur de rentrer trois entiers \net indique si nb3 est compris entre nb1 et nb2 ou nb3 est compris entre nb3 et  nb2. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999) pour la première valeur et n'importe quel valeur pour les autres nombres!!" << endl;

         cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

         // Demander à l'utilisateur de rentrer un nombre entier
         cout << "Rentrer un nombre entier: ";

         cin >> nb1;

         cout << endl;

         cout << "Rentrer un deuxième nombre entier: ";

         cin >> nb2;

         cout << endl;

         cout << "Rentrer un troisième nombre entier: ";

         cin >> nb3;

         cout << endl;

      }

   }

   system("pause");
   return 0;

}

/*    Plans de tests

1.    nb1      nb2         nb3      réponse à l'écran

2.   1         2        3           nb3 ne se situe pas entre les deux autres nombres entiers

3.   3         1        2           nb3 se situe entre nb2 et nb1

4.   2         3        1           nb3 se situe entre nb1 et nb2

5.   -1        -2       -3          nb3 ne se situe pas entre les deux autres nombres entiers

6.  -3         -1       -2          nb3 se situe entre nb1 et nb2

7.   -1        -3       -2          nb3 se situe entre nb2 et nb1

8.   1         1        1           nb3 ne se situe pas entre les deux autres nombres entiers

9.   -1        -1       -1          nb3 ne se situe pas entre les deux autres nombres entiers

10. Vérifier qu'il n'y a pas de boucle infini

11. Rentrer 9999 comme première valeur et rentrer n'importe quel autre valeur pour les deux autres nombres afin de quitter!

12. Rentrer une lettre et le prog ne fonctionne plus.
*/
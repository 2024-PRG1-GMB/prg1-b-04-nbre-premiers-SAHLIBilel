#include <iostream>
using namespace std;

int main() {
    char choix;
    do {
        cout << "Ce programme :" << endl;
        // controle de saisie de l'utilisateur
        // la valeur doit compris entre 2 et 1000
        int limite;
        do {
            cout << "entrer une valeur [2-1000] :";
            cin >> limite;
            cout << endl;
        } while (limite < 2 || limite > 1000);
        // Rappel: un entier premier est un entier qui ne se divise que par un et lui meme
        // controler le nombre de valeurs par lignes
        int taille = 0;
        for (int nbr = 2; nbr <= limite; nbr++) {
            // cette valeur sert a verifier si il est premier ou nn
            bool premier = true;
            int diviseur = 2;
            while (premier && diviseur < nbr) {
                if (nbr % diviseur == 0) {
                    premier = false;
                }
                diviseur++;
            }
            if (premier) {
                taille++;
                cout << '\t' << nbr << " ";
                if (taille % 5 == 0)
                    cout << endl;
            }
        }

        cout << "\n Voulez-vous recommencer [O/N] :";
        cin >> choix;
        while (choix != 'o' && choix != 'O' && choix != 'n' && choix != 'N') {
            cout << "Voulez-vous recommencer [O/N] :";
            cin >> choix;
        }
        if (choix == 'n' || choix == 'N') {
            cout << "\n Fin de programme";
            break;
        }
    } while (choix == 'o' || choix == 'O');
}

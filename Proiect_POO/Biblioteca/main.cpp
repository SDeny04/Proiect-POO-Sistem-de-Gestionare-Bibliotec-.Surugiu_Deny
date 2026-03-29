#include <iostream>
#include "Biblioteca.h"

using namespace std;

int main() {
    Biblioteca b;
    int opt;

    do {
        cout << "\n1. Adauga carte";
        cout << "\n2. Afiseaza carti";
        cout << "\n3. Cauta carte";
        cout << "\n4. Imprumuta carte";
        cout << "\n5. Returneaza carte";
        cout << "\n0. Iesire\n";
        cin >> opt;

        if (opt == 1) {
            int id;
            string titlu, autor;
            cout << "ID: "; cin >> id;
            cin.ignore();
            cout << "Titlu: "; getline(cin, titlu);
            cout << "Autor: "; getline(cin, autor);

            b.adaugaCarte(Carte(id, titlu, autor));
        }
        else if (opt == 2) {
            b.afiseazaCarti();
        }
        else if (opt == 3) {
            string titlu;
            cin.ignore();
            cout << "Titlu: ";
            getline(cin, titlu);
            b.cautaCarte(titlu);
        }
        else if (opt == 4) {
            int id;
            cout << "ID: ";
            cin >> id;
            b.imprumutaCarte(id);
        }
        else if (opt == 5) {
            int id;
            cout << "ID: ";
            cin >> id;
            b.returneazaCarte(id);
        }

    } while (opt != 0);

    return 0;
}
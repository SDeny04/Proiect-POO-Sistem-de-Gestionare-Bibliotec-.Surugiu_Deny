#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Carte.h"

class Biblioteca {
private:
    vector<Carte> carti;

public:
    void adaugaCarte(Carte c);
    void afiseazaCarti();
    void cautaCarte(string titlu);
    void imprumutaCarte(int id);
    void returneazaCarte(int id);
};

#endif
#include "Carte.h"

Carte::Carte(int id, string titlu, string autor) {
    this->id = id;
    this->titlu = titlu;
    this->autor = autor;
    this->imprumutata = false;
}

int Carte::getId() { return id; }
string Carte::getTitlu() { return titlu; }
string Carte::getAutor() { return autor; }
bool Carte::esteImprumutata() { return imprumutata; }

void Carte::imprumuta() {
    imprumutata = true;
}

void Carte::returneaza() {
    imprumutata = false;
}

string Carte::toString() {
    return to_string(id) + " | " + titlu + " | " + autor +
           (imprumutata ? " | Imprumutata" : " | Disponibila");
}
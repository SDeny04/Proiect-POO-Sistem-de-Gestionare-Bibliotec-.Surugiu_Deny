#ifndef CARTE_H
#define CARTE_H

#include <string>
using namespace std;

class Carte {
private:
    int id;
    string titlu;
    string autor;
    bool imprumutata;

public:
    Carte(int id, string titlu, string autor);

    int getId();
    string getTitlu();
    string getAutor();
    bool esteImprumutata();

    void imprumuta();
    void returneaza();

    string toString();
};

#endif
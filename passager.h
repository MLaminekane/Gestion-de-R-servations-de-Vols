#ifndef PASSAGER_H
#define PASSAGER_H

#include <string>

class Passager {
private:
    std::string nom;
    int id;
    std::string siege;
    double prix;

public:
    Passager(std::string nom, int id, std::string siege, double prix);

    void afficher_informations() const;
    std::string obtenir_nom() const;
    int obtenir_id() const;
    std::string obtenir_siege() const;
    double obtenir_prix() const;
};

#endif

#include "passager.h"
#include <iostream>

Passager::Passager(std::string nom, int id, std::string siege, double prix)
    : nom(nom), id(id), siege(siege), prix(prix) {}

void Passager::afficher_informations() const {
    std::cout << "Informations du passager :" << std::endl;
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Numero de passeport : " << id << std::endl;
    std::cout << "Siege : " << siege << std::endl;
    std::cout << "Prix paye : " << prix << std::endl;
    std::cout << std::endl;
}

std::string Passager::obtenir_nom() const {
    return nom;
}

int Passager::obtenir_id() const {
    return id;
}

std::string Passager::obtenir_siege() const {
    return siege;
}

double Passager::obtenir_prix() const {
    return prix;
}

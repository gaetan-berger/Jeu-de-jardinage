#ifndef FLEUR_H
#define FLEUR_H

#include <string>


class Fleur: public Plante{
    public:
        std::string _name;
        bool _estEclos

        Fleur(std::string nom);
};

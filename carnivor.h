#ifndef CARNIVOR_H
#define CARNIVOR_H

#include <string>


class Carnivor: public Plante{
    public:
        std::string _name;
        int _digestion;

        virtual void mangerMouche();

        Carnivor(std::string nom);
};

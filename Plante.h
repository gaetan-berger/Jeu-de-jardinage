#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
    public:
        std::string _name;
        int _maturite;
        int _nbTaillee;
        int _nbArossee;
        int _valeur;
        bool _estvivant;
        bool _aEngrais;

        virtual void inspecter();
        virtual void croissance();
        virtual void setNbTaillee(int nb){this->_nbTaillee=nb;}
        virtual int getNbTaillee(){return this->_nbTaillee;}
        virtual void setAEngrais(bool engrais){this->_aEngrais=engrais;}
        virtual bool getAEngrais(){return this->_aEngrais;}
        virtual void afficher();

        Plante(std::string name);
};


#endif

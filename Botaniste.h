#ifdef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "Plante.h"
#include <vector>

class Botaniste{
    public:
      std::string _name;
      int _argent;
      int _engrais;
      std::vector<Plante> _listePlante;

      virtual void dormir();
      virtual void acheterEngrais();
      virtual void Plante();
      virtual void vendre();

};

#endif

#ifndef __FUSIL_HPP
#define __FUSIL_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>
#include <Weapon.hpp>


class Fusil: public Weapon {
    protected:
        
    public:
      Fusil ();
      Fusil (const std::string& iName,const std::string& iType, const int& iFreq);
      virtual ~Fusil();
      void coupDeCross();
      void recharger();
      void tirer();
      void viser();
      
    private:
     
};
#endif // __FUSIL_HPP

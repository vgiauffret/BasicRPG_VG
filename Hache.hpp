#ifndef __HACHE_HPP
#define __HACHE_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>
#include <Weapon.hpp>


class Hache: public Weapon {
    protected:
        
    public:
      Hache ();
      Hache (const std::string& iName,const std::string& iType, const int& iFreq);
      virtual ~Hache();
      void coup();
      void lancer();
      void supercoup();
      
    private:
     
};
#endif // __HACHE_HPP

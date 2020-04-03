#ifndef __SORT_HPP
#define __SORT_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>
#include <Weapon.hpp>


class Sort: public Weapon {
    protected:
        
    public:
      Sort ();
      Sort (const std::string& iName, const std::string& iType, const int& iFreq);
      virtual ~Sort();
      void bouledefeu();
      void recharger();
      void gel();
      void maladie();
      
    private:
     
};
#endif // __SORT_HPP

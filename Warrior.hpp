#ifndef __WARRIOR_HPP
#define __WARRIOR_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>
#include <Character.hpp>


class Warrior: public Character {
    protected:
        
    public:
      Warrior ();
      Warrior (const std::string& iName,const int& iAge, const int& iVie, const int& iPhy,const int& iIntel);
      virtual ~Warrior();
      void trainning(const int&);

      
    private:
     
};
#endif // __WARRIOR_HPP

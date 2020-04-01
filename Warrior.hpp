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
      Warrior (const std::string& iName,const int& iAge, const int& iVie,const int& iPhy,const int& iIntel);
      virtual ~Warrior();
      
    private:
      /**
       * Display of the object.
       *
       * @return std::string Dump of the object.
       */
      virtual std::string describe() const;
};
#endif // __CHARACTER_HPP

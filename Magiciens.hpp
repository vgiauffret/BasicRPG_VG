#ifndef __MAGICIENS_HPP
#define __MAGICIENS_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>
#include <Character.hpp>


class Magiciens: public Character {
    protected:
        
    public:
      Magiciens ();
      Magiciens (const std::string& iName,const int& iAge, const int& iVie,const int& iPhy,const int& iIntel);
      virtual ~Magiciens();
      void learning(const int&);

      
    private:
      /**
       * Display of the object.
       *
       * @return std::string Dump of the object.
       */
};
#endif // __CHARACTER_HPP

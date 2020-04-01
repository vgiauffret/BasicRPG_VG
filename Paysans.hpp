#ifndef __PAYSANS_HPP
#define __PAYSANS_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>
#include <Character.hpp>


class Paysans: public Character {
    protected:
        
    public:
      Paysans ();
      Paysans (const std::string& iName,const int& iAge, const int& iVie,const int& iPhy,const int& iIntel);
      virtual ~Paysans();
      
    private:
      /**
       * Display of the object.
       *
       * @return std::string Dump of the object.
       */
      virtual std::string describe() const;
};
#endif // __CHARACTER_HPP

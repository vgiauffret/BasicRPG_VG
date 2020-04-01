#ifndef __Weapon_HPP
#define __Weapon_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>

#include <Utilities.hpp>


class Weapon: public Utilities {
    protected:
        int m_age,m_vie,m_phy,m_intel;
        std::string m_name;
    public:
      Weapon ();
      Weapon (const std::string& iName,const int& iAge, const int& iVie,const int& iPhy,const int& iIntel);
      virtual ~Weapon();
      
    private:
      /**
       * Display of the object.
       *
       * @return std::string Dump of the object.
       */
      virtual std::string describe() const;
};
#endif // __CHARACTER_HPP

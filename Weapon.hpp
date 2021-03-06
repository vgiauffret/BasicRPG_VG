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
        int m_freq;
        std::string m_name,m_type;
    public:
      Weapon ();
      Weapon (const std::string& iName, const std::string& iType,const int& iFreq);
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

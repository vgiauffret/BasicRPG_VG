#ifndef __CHARACTER_HPP
#define __CHARACTER_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <string>

#include <Utilities.hpp>

class Character: public Utilities {
    protected:
        int m_age,m_vie,m_phy,m_intel;
        std::string m_name;
    public:
      Character ();
      Character (const std::string& iName,const int& iAge, const int& iVie,const int& iPhy,const int& iIntel);
      virtual ~Character();
      const int& getAge() const;
      const int& getVie() const;
      const int& getPhy() const;
      const int& getIntel() const;
      const std::string& getName() const;
      void setAge(const int&);
      void setVie(const int&);
      void setPhy(const int&);
      void setIntel(const int&);
      void setName(const std::string&);
      void getCured(const int&);
      void trainning(const int&);
      void learning(const int&);
      void getHurt(const int&, const int&);
    private:
      /**
       * Display of the object.
       *
       * @return std::string Dump of the object.
       */
      virtual std::string describe() const;
};
#endif // __CHARACTER_HPP


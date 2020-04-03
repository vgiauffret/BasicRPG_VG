// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Characcters
#include <Character.hpp>

/**
 * Constructeur du personnage par default
 */
Character::Character() : Character("Noname", 0, 0,0,0) {
}

/**
 * Constructeur du personnage avec les paramètres
 */ 
Character::Character (const std::string& iName, const int& iAge, const int& iLife, const int& iPhy, const int& iIntel) :
	m_name(iName), m_age(iAge),m_vie(iLife),m_phy(iPhy),m_intel(iIntel) {
}

/**
 * Destructeur du personnage
 */
Character::~Character() {
}

/**
 * Permet de récuperer l'age du personnage
 * @return Une entier qui correspond a l'age du personnage
 */
const int& Character::getAge() const {
    return m_age;
}

/**
 * Permet de récuperer la vie du personnage
 * @return Une entier qui correspond la vie du personnage
 */
const int& Character::getVie() const {
    return m_vie;
}

/**
 * Permet de récuperer le physique du personnage
 * @return Une entier qui correspond au physique du personnage
 */
const int& Character::getPhy() const {
    return m_phy;
}

/**
 * Permet de récuperer l'intelligence du personnage
 * @return Une entier qui correspond a l'intelligence du personnage
 */
const int& Character::getIntel() const {
    return m_intel;
}


/**
 * Permet de récuperer le nom de personnage
 * @return Une chaine de charactere qui correspond au nom du personnage
 */
const std::string& Character::getName() const {
    return m_name;
}

/**
 * Affecte l'age a un personnage
 */
void Character::setAge (const int& iAge) {
    if (iAge < 0 ) {
	    std::ostringstream ostr;
	    ostr << "The given age (" << iAge
             << ") is invalid; it should be positive" << std::endl;
	    const std::string& iErrMsg = ostr.str();
	    throw std::out_of_range (iErrMsg);
    }
    m_age = iAge;
}

/**
 * Affecte le nom a un personnage
 */
void Character::setName (const std::string& iName) {
    m_name = iName;
}

/**
 * Affecte la vie a un personnage
 */
void Character::setVie (const int& iLife) {
    if (iLife < 0 || iLife > 100) {
	    std::ostringstream ostr;
	    ostr << "The given life (" << iLife
             << ") is invalid; it should be between 0 & 100" << std::endl;
	    const std::string& iErrMsg = ostr.str();
	    throw std::out_of_range (iErrMsg);
    }
    else
    {
        m_vie = iLife;
    }     
}

/**
 * Affecte la forme physique a un personnage
 */
void Character::setPhy (const int& iPhy) {
    if (iPhy < 0 || iPhy > 100) {
	    std::ostringstream ostr;
	    ostr << "The given physique (" << iPhy
             << ") is invalid; it should be between 0 & 100" << std::endl;
	    const std::string& iErrMsg = ostr.str();
	    throw std::out_of_range (iErrMsg);
    }
    else
    {
        m_phy = iPhy;   
    }
}

/**
 * Affecte le niveau intelllectuelle a un personnage
 */
void Character::setIntel (const int& iIntel) {
    if (iIntel < 0 || iIntel > 100) {
	    std::ostringstream ostr;
	    ostr << "The given intellectuelle (" << iIntel
             << ") is invalid; it should be between 0 & 100" << std::endl;
	    const std::string& iErrMsg = ostr.str();
	    throw std::out_of_range (iErrMsg);
    }
    else
    {
        m_intel = iIntel; 
    }
}

/**
 * Permet de recupérer toutes les infos d'un personnage
 * @return Une chaine de charactere qui correspond au nom du personnage suivie de son age et de toutes ses caractéristique
 */
std::string Character::describe() const {
	std::ostringstream ostr;
	ostr << m_name << " : " << m_age << " Vie : " << m_vie 
    << " Pysique : " << m_phy << " Intellectuelle : " << m_intel;
	return ostr.str();
}

/**
 * Le perso se fait soigner et gagne des points de vie
 * @param iLife : Entier qui represente la vie du personnage
 */
void Character::getCured (const int& iLife) {
    m_vie = iLife + 10;
    if (m_vie>100)
    {
        m_vie=100;
    }
}

/**
 * Le perso gagne en aptitude physique
 * @param iPhy : Entier qui represente l'aptitude physique du personnage
 */
void Character::trainning(const int& iPhy) {
    m_phy = iPhy + 10;
    if (m_phy>100)
    {
        m_phy=100;
    }
}

/**
 * Le perso gagne en aptitude intellectuelle
 * @param iIntel : Entier qui represente l'aptitude intellectuelle du personnage
 */
void Character::learning (const int& iIntel) {
    m_intel = iIntel + 10;
    if (m_intel>100)
    {
        m_intel=100;
    }
}

/**
 * Le perso perd des points de vie et de l’aptitude physique
 * @param iLife : Entier qui represente la vie du personnage
 * @param iPhy : Entier qui represente l'aptitude physique du personnage
 */
void Character::getHurt (const int& iLife, const int& iPhy) {
    m_vie = iLife - 10;
	m_phy = iPhy - 10;
    if(m_vie<0)
    {
        m_vie=0;
    }
    if(m_phy<0)
    {
        m_phy=0;
    }
}

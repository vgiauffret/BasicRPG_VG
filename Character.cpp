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
 * 
 * 
 */
Character::Character() : Character("Noname", 0, 100,0,10) {
}

/**
 * 
 * 
 */ 
Character::Character (const std::string& iName, const int& iAge, const int& iVie, const int& iPhy, const int& iIntel) :
	m_name(iName), m_age(iAge),m_vie(iVie),m_phy(iPhy),m_intel(iIntel) {
}

/**
 * 
 * 
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
void Character::setVie (const int& iVie) {
    m_vie = iVie;
}

/**
 * Affecte la forme physique a un personnage
 */
void Character::setPhy (const int& iPhy) {
    m_phy = iPhy;
}

/**
 * Affecte le niveau intelllectuelle a un personnage
 */
void Character::setIntel (const int& iIntel) {
    m_intel = iIntel;
}

/**
 * Permet de recupérer toutes les infos d'un personnage
 * 
 * @return Une chaine de charactere qui correspond au nom du personnage suivie de son age et de toutes ses caractéristique
 */
std::string Character::describe() const {
	std::ostringstream ostr;
	ostr << m_name << " : " << m_age << " Caractéristique : " << 
	"*Vie : " << m_vie << "*Pysique : " << m_phy << "*Intellectuelle : " << m_intel;
	return ostr.str();
}

/**
 * Le perso se fait soigner et gagne des points de vie
 * @param iVie : Entier qui represente la vie du personnage
 * @return Entier qui représente la vie du personnage apres les soins
 */
const int& Character::getCured (const int& iVie) {
    m_vie = iVie + 20;
	return m_vie;
}

/**
 * Le perso gagne en aptitude physique
 * @param iPhy : Entier qui represente l'aptitude physique du personnage
 * @return Entier qui représente l'aptitude physique du personnage apres l'entrainement
 */
const int& Character::getCured (const int& iPhy) {
    m_phy = iPhy + 10;
	return m_phy;
}

/**
 * Le perso gagne en aptitude intellectuelle
 * @param iIntel : Entier qui represente l'aptitude intellectuelle du personnage
 * @return Entier qui représente l'aptitude intellectuelle du personnage apres l'entrainement
 */
const int& Character::learning (const int& iIntel) {
    m_intel = iIntel + 10;
	return m_intel;
}

/**
 * Le perso gagne en aptitude intellectuelle
 * @param iIntel : Entier qui represente l'aptitude intellectuelle du personnage
 * @return Entier qui représente l'aptitude intellectuelle du personnage apres l'entrainement
 */
const int& Character::learning (const int& iIntel) {
    m_intel = iIntel + 10;
	return m_intel;
}

/**
 * Le perso perd des points de vie et de l’aptitude physique
 * @param iVie : Entier qui represente la vie du personnage
 * @param iPhy : Entier qui represente l'aptitude physique du personnage
 * @return 
 */
void Character::gethurt (const int& iVie, const int& iPhy) {
    m_vie = iVie - 10;
	m_phy = iPhy - 10;
}

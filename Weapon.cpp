// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Weapon
#include <Weapon.hpp>

/**
 * Constructeur du personnage Weapon par default
 */
Weapon::Weapon() : Weapon("Noname", 0, 0, 0) {
}

/**
 * Constructeur du personnage Weapon avec les paramètres
 */ 
Weapon::Weapon (const std::string& iName,const int& iDegat, const int& iType,const int& iFreq) :
	m_name(iName), m_degat(iDegat),m_type(iType),m_freq(iFreq) {
}

/**
 * Destructeur du personnage Weapon
 */
Weapon::~Weapon() {
}




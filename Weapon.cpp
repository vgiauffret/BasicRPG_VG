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
Weapon::Weapon() : Weapon("Noname", 0, 0,0,0) {
}

/**
 * Constructeur du personnage Weapon avec les paramètres
 */ 
Weapon::Weapon (const std::string& iName, const int& iAge, const int& iLife, const int& iPhy, const int& iIntel) :
	m_name(iName), m_age(iAge),m_vie(iLife),m_phy(iPhy),m_intel(iIntel) {
}

/**
 * Destructeur du personnage Weapon
 */
Weapon::~Weapon() {
}




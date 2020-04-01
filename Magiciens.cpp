// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Magiciens
#include <Magiciens.hpp>

/**
 * Constructeur du personnage Magiciens par default
 */
Magiciens::Magiciens() : Magiciens("Noname", 0, 0,0,0) {
}

/**
 * Constructeur du personnage Magiciens avec les paramètres
 */ 
Magiciens::Magiciens (const std::string& iName, const int& iAge, const int& iLife, const int& iPhy, const int& iIntel) :
	Character() {
}

/**
 * Destructeur du personnage Magiciens
 */
Magiciens::~Magiciens() {
}




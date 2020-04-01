// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Paysans
#include <Paysans.hpp>

/**
 * Constructeur du personnage Paysans par default
 */
Paysans::Paysans() : Paysans("Noname", 0, 0,0,0) {
}

/**
 * Constructeur du personnage Paysans avec les paramètres
 */ 
Paysans::Paysans (const std::string& iName, const int& iAge, const int& iLife, const int& iPhy, const int& iIntel) :
	Character() {
}

/**
 * Destructeur du personnage Paysans
 */
Paysans::~Paysans() {
}




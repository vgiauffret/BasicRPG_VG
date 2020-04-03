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

/**
 * Le Magicien gagne en aptitude intellectuelle
 * @param iIntel : Entier qui represente l'aptitude intellectuelle du Magicien
 */
/*
void Character::learning (const int& iIntel) {
    m_intel = iIntel + 20;
    if (m_intel>100)
    {
        m_intel=100;
    }
}*/
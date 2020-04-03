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

/**
 * Le Paysans se fait soigner et gagne des points de vie
 * @param iLife : Entier qui represente la vie du Paysans
 */
void Paysans::getCured (const int& iLife) {
    m_vie = iLife + 20;
    if (m_vie>100)
    {
        m_vie=100;
    }
}
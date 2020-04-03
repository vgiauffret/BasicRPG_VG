// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Warrior
#include <Warrior.hpp>

/**
 * Constructeur du personnage Warrior par default
 */
Warrior::Warrior() : Warrior("Noname", 0, 0, 0, 0) {
}

/**
 * Constructeur du personnage Warrior avec les paramètres
 */ 
Warrior::Warrior (const std::string& iName, const int& iAge, const int& iLife, const int& iPhy, const int& iIntel) : 
Character(iName,iAge,iLife,iPhy,iIntel) {
}

/**
 * Destructeur du personnage Warrior
 */
Warrior::~Warrior() {
}

/**
 * Le Warrior gagne en aptitude physique
 * @param iPhy : Entier qui represente l'aptitude physique du Warrior
 */
void Warrior::trainning(const int& iPhy) {
    m_phy = iPhy + 20;
    if (m_phy>100)
    {
        m_phy=100;
    }
}
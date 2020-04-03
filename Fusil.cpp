// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Fusil
#include <Fusil.hpp>

/**
 * Constructeur du Fusil par default
 */
Fusil::Fusil() : Fusil("Fusil", "Feu", 0) {
}

/**
 * Constructeur du Fusil avec les paramètres
 */ 
Fusil::Fusil (const std::string& iName, const std::string& iType, const int& iFreq) : 
Weapon(iName,iType,iFreq) {
}

/**
 * Destructeur du  Fusil
 */
Fusil::~Fusil() {
}

/**
 * 
 */
void Fusil::coupDeCross()
{

}

/**
 * 
 */
void Fusil::recharger()
{

}

/**
 * 
 */
void Fusil::tirer()
{

}

/**
 * 
 */
void Fusil::viser()
{

}

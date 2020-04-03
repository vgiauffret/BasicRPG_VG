// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Hache
#include <Hache.hpp>

/**
 * Constructeur du Hache par default
 */
Hache::Hache() : Hache("Noname", 0, 0, 0) {
}

/**
 * Constructeur du Hache avec les paramètres
 */ 
Hache::Hache (const std::string& iName, const int& iDegat, const int& iType, const int& iFreq) : 
Weapon(iName,iDegat,iType,iFreq) {
}

/**
 * Destructeur du  Hache
 */
Hache::~Hache() {
}

/**
 * 
 */
void Hache::coup()
{

}

/**
 * 
 */
void Hache::lancer()
{

}

/**
 * 
 */
void Hache::supercoup()
{

}


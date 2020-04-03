// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <stdexcept>
#include <cassert>
#include <sstream>
#include <string>
// Sort
#include <Sort.hpp>

/**
 * Constructeur du Sort par default
 */
Sort::Sort() : Sort("Sort", "Magie", 0) {
}

/**
 * Constructeur du Sort avec les paramètres
 */ 
Sort::Sort (const std::string& iName, const std::string& iType, const int& iFreq) : 
Weapon(iName,iType,iFreq) {
}

/**
 * Destructeur du  Sort
 */
Sort::~Sort() {
}

/**
 * 
 */
void Sort::bouledefeu()
{

}

/**
 * 
 */
void Sort::recharger()
{

}

/**
 * 
 */
void Sort::gel()
{

}

/**
 * 
 */
void Sort::maladie()
{

}

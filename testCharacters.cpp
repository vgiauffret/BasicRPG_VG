// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <iostream>
#include <memory>
#include <cassert>
// Boost
#include <boost/filesystem.hpp>
// Boost Unit Test Framework (UTF)
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE TestCharacters
#include <boost/test/unit_test.hpp>
// Characters
#include <Character.hpp>
#include <Warrior.hpp>

namespace boost_utf = boost::unit_test;

// (Boost) Unit Test XML Report
std::ofstream utfReportStream ("TestCharacters_utfresults.xml");

/**
 * Configuration for the Boost Unit Test Framework (UTF)
 */
struct UnitTestConfig {
  /** Constructor. */
  UnitTestConfig() {
    boost_utf::unit_test_log.set_stream (utfReportStream);
    boost_utf::unit_test_log.set_format (boost_utf::OF_XML);
    boost_utf::unit_test_log.set_threshold_level (boost_utf::log_test_units);
  }

  /** Destructor. */
  ~UnitTestConfig() {
  }
};

// /////////////// Main: Unit Test Suite //////////////

// Set the UTF configuration (re-direct the output to a specific file)
BOOST_GLOBAL_FIXTURE (UnitTestConfig);

// Start the test suite
BOOST_AUTO_TEST_SUITE (master_test_suite)

/**
 * Test various ways to build Character objects
 */
BOOST_AUTO_TEST_CASE (characters1) {

  // Perso 1
  Character* p1_ptr = new Character ("Perceval", 35, 100, 50, 50);
  assert (p1_ptr != nullptr);
  Warrior* p2_ptr = new Warrior("Nico",25,100,50,100);
  assert (p2_ptr != nullptr);
  std::cout << "Perso just built: " << *p1_ptr << std::endl;
  std::cout << "Warrior just built: " << *p2_ptr << std::endl;
  BOOST_CHECK_MESSAGE (p1_ptr->getAge() == 35,
                       "The age of this character should be 35");

  // Amend Perso 1
  assert (p1_ptr!=nullptr);
  assert (p2_ptr!=nullptr);
  //Affecte l'age du personnage a 38
  p1_ptr->setAge(38);
  //Affiche toute les infos du personnages
  std::cout << "Perso after age change age: " << *p1_ptr << std::endl;
  //Blessure du personnage
  p1_ptr->getHurt(p1_ptr->getVie(),p1_ptr->getPhy());
  std::cout << "Perso after age change vie et physique: " << *p1_ptr << std::endl;
  //Entrainement du personnage
  p1_ptr->trainning(p1_ptr->getPhy());
  std::cout << "Perso after age change physique: " << *p1_ptr << std::endl;
  //Apprentissage du personnage
  p1_ptr->learning(p1_ptr->getIntel());
  std::cout << "Perso after age change intellectuelle: " << *p1_ptr << std::endl;
  //Soins sur le personnage
  p1_ptr->getCured(p1_ptr->getVie());
  std::cout << "Perso after age change vie: " << *p1_ptr << std::endl;
  //Affecte un nom au personnage
  p1_ptr->setName("Vincent");
  std::cout << "Perso after age change name: " << *p1_ptr << std::endl;
  //Génere une erreur
  //p1_ptr->setVie(200);
  std::cout << "Perso after age change vie: " << *p1_ptr << std::endl;
  //Entrainement d'un guerrier
  p2_ptr->trainning(p2_ptr->getPhy());
  std::cout << "Warrior after age change physique: " << *p2_ptr << std::endl;


  BOOST_CHECK_MESSAGE (p1_ptr->getAge() == 38,
                       "The age of this character should be 38");

  // Cleaning
  delete p1_ptr; p1_ptr = nullptr;
  delete p2_ptr; p2_ptr = nullptr;
}

// End the test suite
BOOST_AUTO_TEST_SUITE_END()

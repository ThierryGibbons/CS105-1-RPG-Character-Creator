#include "Mage.h"

Mage::Mage(const std::string& name, Race race)
    : Player(name, race, 100, 200) {}

std::string Mage::attack() const {
    return "I will crush you with my arcane missiles!";
}

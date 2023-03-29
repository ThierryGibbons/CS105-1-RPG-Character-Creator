#include "Priest.h"

Priest::Priest(const std::string& name, Race race)
    : Player(name, race, 100, 200) {}

std::string Priest::attack() const {
    return "I will assault you with holy wrath!";
}

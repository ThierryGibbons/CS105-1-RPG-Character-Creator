#include "Warrior.h"

Warrior::Warrior(const std::string& name, Race race)
    : Player(name, race, 200, 0) {}

std::string Warrior::attack() const {
    return "I will destroy you with my sword!";
}

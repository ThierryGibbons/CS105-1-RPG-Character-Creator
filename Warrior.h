#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

class Warrior : public Player {
public:
    Warrior(const std::string& name, Race race);

    // Override attack method
    std::string attack() const override;
};

#endif // WARRIOR_H

#ifndef MAGE_H
#define MAGE_H

#include "Player.h"

class Mage : public Player {
public:
    Mage(const std::string& name, Race race);

    // Override attack method
    std::string attack() const override;
};

#endif // MAGE_H

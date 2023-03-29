#ifndef PRIEST_H
#define PRIEST_H

#include "Player.h"

class Priest : public Player {
public:
    Priest(const std::string& name, Race race);

    // Override attack method
    std::string attack() const override;
};

#endif // PRIEST_H

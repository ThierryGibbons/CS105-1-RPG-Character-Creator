#ifndef PLAYER_H
#define PLAYER_H

#include <string>

enum class Race {
    HUMAN,
    ELF,
    DWARF,
    ORC,
    TROLL
};

class Player {
public:
    // Constructor
    Player(const std::string& name, Race race, int hitPoints, int magicPoints);

    // Getters
    const std::string& getName() const;
    Race getRace() const;
    int getHitPoints() const;
    int getMagicPoints() const;

    // Setters
    void setName(const std::string& name);
    void setRace(Race race);
    void setHitPoints(int hitPoints);
    void setMagicPoints(int magicPoints);

    // Attack function
    virtual std::string attack() const;

private:
    std::string name_;
    Race race_;
    int hitPoints_;
    int magicPoints_;
};

#endif // PLAYER_H

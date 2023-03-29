#include "Player.h"


Player::Player(const std::string& name, Race race, int hitPoints, int magicPoints)
    : name_(name), race_(race), hitPoints_(hitPoints), magicPoints_(magicPoints) {}

const std::string& Player::getName() const {
    return name_;
}

Race Player::getRace() const {
    return race_;
}

int Player::getHitPoints() const {
    return hitPoints_;
}

int Player::getMagicPoints() const {
    return magicPoints_;
}

void Player::setName(const std::string& name) {
    name_ = name;
}

void Player::setRace(Race race) {
    race_ = race;
}

void Player::setHitPoints(int hitPoints) {
    hitPoints_ = hitPoints;
}

void Player::setMagicPoints(int magicPoints) {
    magicPoints_ = magicPoints;
}

std::string Player::attack() const {
    return "No attack method defined yet!";
}

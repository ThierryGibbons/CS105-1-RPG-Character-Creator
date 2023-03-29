#include <iostream>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

void printPlayerDetails(const Player& player) {
    std::cout << "Name: " << player.getName() << std::endl;
    std::cout << "Race: ";
    switch (player.getRace()) {
        case Race::HUMAN: std::cout << "Human"; break;
        case Race::ELF: std::cout << "Elf"; break;
        case Race::DWARF: std::cout << "Dwarf"; break;
        case Race::ORC: std::cout << "Orc"; break;
        case Race::TROLL: std::cout << "Troll"; break;
    }
    std::cout << std::endl;
    std::cout << "Hit Points: " << player.getHitPoints() << std::endl;
    std::cout << "Magic Points: " << player.getMagicPoints() << std::endl;
    std::cout << "Attack: " << player.attack() << std::endl;
}

int main() {
    std::vector<Warrior> warriors;
    std::vector<Priest> priests;
    std::vector<Mage> mages;

    int choice;
    std::string name;
    int race;

    do {
        std::cout << "1. Create Warrior" << std::endl;
        std::cout << "2. Create Priest" << std::endl;
        std::cout << "3. Create Mage" << std::endl;
        std::cout << "4. Finish Creating Characters" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 3) {
            std::cout << "Enter name: ";
            std::cin >> name;

            std::cout << "Select race (0: Human, 1: Elf, 2: Dwarf, 3: Orc, 4: Troll): ";
            std::cin >> race;

            switch (choice) {
                case 1:
                    warriors.emplace_back(name, static_cast<Race>(race));
                    break;
                case 2:
                    priests.emplace_back(name, static_cast<Race>(race));
                    break;
                case 3:
                    mages.emplace_back(name, static_cast<Race>(race));
                    break;
            }
        }

    } while (choice != 4);

    std::cout << "\n----------\nWarriors:\n----------" << std::endl;
    for (const auto& warrior : warriors) {
        printPlayerDetails(warrior);
        std::cout << std::endl;
    }

    std::cout << "----------\nPriests:\n----------" << std::endl;
    for (const auto& priest : priests) {
        printPlayerDetails(priest);
        std::cout << std::endl;
    }

    std::cout << "----------\nMages:\n----------" << std::endl;
    for (const auto& mage : mages) {
        printPlayerDetails(mage);
        std::cout << std::endl;
    }

    return 0;
}

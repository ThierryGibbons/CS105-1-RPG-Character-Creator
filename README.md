# CS105-2-RPG-Character-Creator
Suppose that you are part of a team which is creating a role-playing game (RPG). You have  been asked to create the foundational classes to represent player characters, that is, the  entity within the game that the user of the game software controls.

## The Player Base Class: LO3
- The `Player` base class contains `name`, `race`, `hitPoints`, and `magicPoints` data members for the players.
- It provides a constructor with four parameters corresponding to all of the four data members.
- It provides `getters` and `setters` member functions for all the four data members.
- These four data members will be common to all `Player` objects.
- The `Player` class will contain an `attack()` member function that returns “No attack method defined yet!”.

Note: The derived classes will override this `attack()` member function to define specific attack methods for `Warrior`, `Priest`, and `Mage` derived classes as given in next sub-section.

### The enum type: LO 1
- The race can be represented by an enumerated type using `enum` with the following values:
  - `HUMAN`
  - `ELF`
  - `DWARF`
  - `ORC`
  - `TROLL`

Note: The `enum` may be code inside `Player.h` which will ensure all derived classes have access to it

## The Three Derived Classes:
Following are the specific player types that will be derived classes of the Player class:
- Warrior 
  - 200 hitPoints, 0 magicPoints
  - Their attack method should return "I will destroy you with my sword!"
- Priest 
  - 100 hitPoints, 200 magicPoints
  - Their attack method should return "I will assault you with holy wrath!"
- Mage 
  - 200 hitPoints, 0 magicPoints
  - Their attack method should return "I will crush you with my arcane missiles!"

## The main function:
Inside the main function, you should allow the user to create different kinds of player objects, 
allowing them to select the derived class which you can request from the user using a simple 
menu. You should also let the user select the race for their player as well. Additionally, you can 
ask the user to assign a name to the player as well.
Store players are created by the user in three different vectors namely warrior, priest, and 
mage. Once you are done with the creation of player objects, iterate through all three vectors 
and print out the player details along with their attack methods, names, and race (LO 4).


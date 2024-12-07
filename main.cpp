/**
*    @file: appointment_main.cc
 *   @author: Elijah Flader and Victoria Palozzi
 *   @date: Dec 7, 2024
 *   @brief:
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

struct Monster {
    string name;
    int health;
    int damage;
};

struct Weapon {
    string name;
    int damage;
};

struct Potion {
    int health;
    int damage;
    int strength; // take damage of weapon and multiply it by strength
};

struct Chest {
    Potion p;
    int coinCount;
};

struct Player {
    string name;
    vector <Potion> inventory;
    int health;
    int strength;
    Weapon w;
    int coinCount;
};

struct Room {
    Monster m;
    Chest c;
};

class AdventureGame {
public:
    AdventureGame();
    AdventureGame(string name);

    Player getPlayer();
    int getRoomNumber();
    Room getCurrentRoom();
    void setPlayer(string name);

    Chest getChest();
    void generateRoom();
    void moveForward();
    void useObject();
    void roomInteraction();
    void wait();

    void printNotice();
    void printInventory();
    void printHelp();

private:
    Player p;
    int roomNumber;
    Room currentRoom;
};

int main(int argc, char const *argv[]) {
    // Load data into the appointments vector
    Monster m;

}

AdventureGame::AdventureGame() {    // Victoria
p.health = 0;
}

AdventureGame::AdventureGame(string name) {

}

Player AdventureGame::getPlayer() {
    return p;    // Victoria

}
int AdventureGame::getRoomNumber() {

}
Room AdventureGame::getCurrentRoom() {

}

void AdventureGame::setPlayer(string name) {
p.name = name;
   // Victoira
}
Chest AdventureGame::getChest() {

}
void AdventureGame::generateRoom() {

}
void AdventureGame::moveForward() {

}
void AdventureGame::useObject() {    // Victoria
vector<Potion> invent = p.inventory;

printInventory();

cout << "Choose a potion in your inventory: " << endl;
int selection;
cin >> selection;

while (selection < 0 || selection > invent.size() - 1) {

}

Potion p = invent.at(selection);

if (p.health == 0 && p.damage == 0) {
    // Change strength
} 

else if (p.health == 0 && p.strength == 0) {
    // Change damage
}

else if (p.damage == 0 && p.strength == 0) {
    // Change health
}

}
void AdventureGame::roomInteraction() { 
    if (monster.health > 0) {
        monster.health -= p.health * p.strength;
    }   // Victoria
    if (monster.chest > 0) {
        getChest();
    }

}
void AdventureGame::wait() {

}

void AdventureGame::printNotice() {

}
void AdventureGame::printInventory() { 
cout << "Potions: " << endl;  // Victoria
    for (int i = 0; i < Inventory.size(); i++)
        cout << Inventory[i] << " ";
  
}

void AdventureGame::printHelp() {

}

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

}
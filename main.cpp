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

    void printNotice(char select);
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

AdventureGame::AdventureGame() {    // Victoria

}
AdventureGame::AdventureGame(string name) {

}

Player AdventureGame::getPlayer() {    // Victoria

}
int AdventureGame::getRoomNumber() {
    return roomNumber;
}
Room AdventureGame::getCurrentRoom() {
    return currentRoom;
}

void AdventureGame::setPlayer(string name) {    // Victoira

}
Chest AdventureGame::getChest() {
    return currentRoom.c;
}
void AdventureGame::generateRoom() {

}
void AdventureGame::moveForward() {
    generateRoom();
    roomNumber++;
}
void AdventureGame::useObject() {    // Victoria

}
void AdventureGame::roomInteraction() {    // Victoria

}
void AdventureGame::wait() {
    // If there's a monster, subtract from healh
    if (currentRoom.m.health > 0) {
          p.health -= currentRoom.m.damage;
          cout << currentRoom.m.name << " did " << currentRoom.m.damage << " damage" << endl;
    }
    else {
      cout << "You waited" << endl;
    }
}

void AdventureGame::printNotice(char select) {
    cout << left;

    switch (select) {
        case 'p':
            cout << "Player:" << endl;
            cout << "\t" << setw(15) << "Current Health" << ": " << p.health << endl;
            cout << "\t" << setw(15) << "Strength" << ": " << p.strength << endl;
            break;
        case 'w':
            cout << "Weapon:" << endl;
            cout << "\t" << setw(15) << "Weapon" << ": " << p.w.name << endl;
            cout << "\t" << setw(15) << "Damage" << ": " << p.w.damage << endl;
            break;
        case 'r':
            cout << "Room:" << endl;
            cout << "\tthis room contains a" << endl;

            if (currentRoom.m.health > 0) {
                Monster monster = currentRoom.m;
                cout << monster.name << "with" << monster.health << "health that" << endl;
                cout << "does" << monster.damage << "damage" << endl;
            } else{
                cout << "chest" << endl;
            }
            break;
        default:
            break;
    }
}
void AdventureGame::printInventory() {    // Victoria

}
void AdventureGame::printHelp() {
    // --------------------------
    // Help:
    //     forward - Move forward through rooms
    //     wait - Just sit there
    //     use - Use one of your potions
    //     interact - Interact with the chest, if there is one
    //     attack - Attack! Wait, is there a monster?
    //     inventory - Show the entire 2 potions you have
    //     help - Get this screen
	//
    //     quit - Give up, because this is too difficult
    // --------------------------

    cout << "--------------------------" << endl;
    cout << "Help:" << endl;
    cout << "\tforward - Move forward through rooms" << endl;;
    cout << "\twait - Just sit there" << endl;
    cout << "\tuse - Use one of your potions" << endl;
    cout << "\tinteract - Interact with the chest, if there is one" << endl;
    cout << "\tattack - Attack! Wait, is there a monster?" << endl;
    cout << "\tinventory - Show the entire 2 potions you have" << endl;
    cout << "\thelp - Get this screen" << endl;
    cout << endl;
    cout << "\tquit - Give up, because this is too difficult" << endl;
    cout << "--------------------------" << endl;
}

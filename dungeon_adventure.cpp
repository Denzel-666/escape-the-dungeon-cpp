#include <iostream>
using namespace std;

int main() {
    int firstChoice;

    // Game Introduction
    cout << "==============================" << endl;
    cout << "   WELCOME TO ESCAPE THE DUNGEON" << endl;
    cout << "==============================" << endl;
    cout << "You wake up in a cold, dark dungeon..." << endl;

    // First player choice
    cout << "There are two paths ahead of you:" << endl;
    cout << "1. A tunnel that echoes with strange noises." << endl;
    cout << "2. A staircase leading upward into darkness." << endl;
    cout << "What do you choose? (Enter 1 or 2): ";
    cin >> firstChoice;

    // Tunnel path logic
    if (firstChoice == 1) {
        int tunnelChoice;
        cout << "\nYou enter the tunnel and see a monster ahead!" << endl;
        cout << "Do you want to:" << endl;
        cout << "1. Fight the monster" << endl;
        cout << "2. Sneak past it" << endl;
        cout << "Enter your choice: ";
        cin >> tunnelChoice;

        if (tunnelChoice == 1) {
            cout << "\nYou bravely fight the monster and win!" << endl;
            cout << "You find a key and escape the dungeon. YOU WIN!" << endl;
        } else if (tunnelChoice == 2) {
            cout << "\nYou try to sneak past but make noise..." << endl;
            cout << "The monster wakes up and eats you. GAME OVER!" << endl;
        } else {
            cout << "\nInvalid input. The monster notices your hesitation. GAME OVER!" << endl;
        }

    // Staircase path with switch statement
    } else if (firstChoice == 2) {
        int stairChoice;
        cout << "\nYou climb the stairs and find a locked door with three buttons." << endl;
        cout << "Which button do you press?" << endl;
        cout << "1. Red\n2. Green\n3. Blue" << endl;
        cout << "Enter your choice: ";
        cin >> stairChoice;

        switch (stairChoice) {
            case 1:
                cout << "\nThe red button triggers a trap. Spikes shoot out! GAME OVER!" << endl;
                break;
            case 2:
                cout << "\nThe green button opens the door. You step outside into freedom. YOU WIN!" << endl;
                break;
            case 3:
                cout << "\nThe blue button does nothing. You're stuck and can't escape. GAME OVER!" << endl;
                break;
            default:
                cout << "\nInvalid input. While you decide, the ceiling collapses. GAME OVER!" << endl;
        }

    } else {
        // Invalid input for first choice
        cout << "\nInvalid input. You stumble and fall into a pit. GAME OVER!" << endl;
    }

    return 0;
}

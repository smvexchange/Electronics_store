#include <iostream>
#include "IElectronics.h"
#include "Appliances.h"
#include "Device.h"
#include "Fridge.h"
#include "Player.h"
#include "Vacuum_cleaner.h"


int main() {

    IElectronics** electronics_store = new IElectronics*[3];

    electronics_store[0] = new Fridge(346, 67);
    electronics_store[1] = new Player(100, 12);
    electronics_store[2] = new Vacuum_cleaner(300, 3, 1);

    std::cout << "Welcome to the electronics store!" << std::endl;
    bool open = true;

    while (open) {
        std::cout << "Select the product: 1 - Fridge, 2 - Player, 3 - Vacuum cleaner, 0 to exit" << std::endl;
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            electronics_store[0]->show_spec();
            break;

        case 2:
            electronics_store[1]->show_spec();
            break;

        case 3:
            electronics_store[2]->show_spec();
            break;

        case 0:
            open = false;
            break;

        default:
            std::cout << "Select a product from 1 to 5 or 0 to exit" << std::endl;
            break;
        }
    }

    delete[] electronics_store;
    return 0;
}
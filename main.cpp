#include "Grocer.h"
#include <iostream>
#include <string>
using namespace std;

// Brian Mullen brian.mullen2@snhu.edu 12-14-2024
// CS-210-11575-M01 Programming Languages 2025 C-6 (Oct - Dec)


int main() {
    Grocer myStoreInventory;
    int selection;
    // used to keep the app alive
    bool keepAlive = true;
    // reading the file and seting the inventory map then backing up the data
    myStoreInventory.SetInventory();
    myStoreInventory.saveInventoryToFile();
    // show the menu to the user then take an input
    myStoreInventory.displayMenu();
    cin >> selection;
    while(keepAlive)
    {
        //processing user input
        if(selection == 1) {
            myStoreInventory.itemSearch();
            
        }
        else if(selection == 2) {
            myStoreInventory.displayInventoryNumeric();
            
        }
        else if(selection == 3) {
            myStoreInventory.displayInventoryGraph();
            
        }
        else if(selection == 4) {
            cout << "Exiting the program. Goodbye!" << endl;

            break;
        }
        else {
            cout << "Invalid selection. Please choose a valid option." << endl;
        }   
        // Re-display the menu after processing and taking a new input
        myStoreInventory.displayMenu(); 
        cin >> selection;
    };
    
    return 0;
}
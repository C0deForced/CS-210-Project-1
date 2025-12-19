#include "Grocer.h"
#include <map>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;



// Used to Display the menu options to the user
void Grocer::displayMenu() {
    cout << "Grocer Menue" << endl;
    cout << "1. Item Search" << endl;
    cout << "2. Show Inventory Numeric Amount" << endl;
    cout << "3. Show Inventory Graph" << endl;
    cout << "4. Exit" << endl;
    cout << "Please select an option (1-4): ";
}
void Grocer::SetInventory() {
    // File variable declaration and opening
    std::ifstream file;
    file.open("CS210_Project_Three_Input_File.txt");
    string line;
    if(file.is_open()) {
        while(getline(file, line)) {
            // Check that the line var is not blank
            // Checking for Carriage return made in some text editors
            if(!line.empty()&& line.back()=='\r') {
                //If so remove the carriage return
                line.pop_back();
            }
            if(inventory.count(line) == 1) {
            // Check if the key arleady exists and if so increment the value
                int count = inventory[line];
                inventory[line] = count + 1;
            }
            else {
                // If the key doesn't exist add it to inventory with a count of 1
                inventory[line] = 1;
            }
        }
        // Closing the file stream for good house keeping
        file.close();
    }
    //Reads each line of the file to add the key value to inventory map
    else{
        cout << "Error opening file." << endl;
    }
    
}
// Used to display a key with its numeric value for easy reading
void Grocer::displayInventoryNumeric()  {
    cout << "Current Inventory Count:" << endl;

    for(auto& itemGroup : inventory) {
        string itemName = itemGroup.first;
        int itemCount = itemGroup.second;
        cout << itemName << " " << itemCount << endl;
    }
}
// Used to display key and value in a more graphical format for visual users
void Grocer::displayInventoryGraph()  {
    cout << "Inventory by 'graph' level:" << endl;
    for(auto& itemGroup : inventory) {
        string itemName = itemGroup.first;
        int itemCount = itemGroup.second;
        cout << itemName << " ";
        for(int i = 0; i < itemCount; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}
// Allow for individual item search by key
void Grocer::itemSearch()  {
    string searchItem;
    cout << "What item would you like to search for? (Case Sensitive) " << endl;
    cin >> searchItem;
    if(inventory.count(searchItem) == 1) {
        int count = inventory[searchItem];
        cout << "We have " << count << " of " << searchItem << " in stock." << endl;
        cout << endl;
    }
    else {
        cout << "Sorry, Item " << searchItem << " is not found or in stock." << endl;
        cout << endl;
    }
}
// Save Inventory to a file as a backup
void Grocer::saveInventoryToFile() {
    std::ofstream file;
    file.open("Saved_Inventory.dat");
    if(file.is_open()) {
        for(auto& itemGroup : inventory) {
            string itemName = itemGroup.first;
            int itemCount = itemGroup.second;
            file << itemName << " " << itemCount << endl;
        }
        file.close();
        cout << "Inventory successfully saved to Saved_Inventory.txt" << endl;
    }
    else {
        cout << "Error opening file for writing." << endl;
    }
}
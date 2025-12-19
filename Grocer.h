#ifndef GROCER_H
#define GROCER_H
#include <map>
#include <string>
using namespace std;

class Grocer {
    private:
        // Using a map as its operates similarly to a python dictionary and is best store cordidated data
        map<string, int> inventory;
    
    public:
        // Used to output to the console for the user
        void displayMenu();
        void displayInventoryNumeric();
        void displayInventoryGraph();

        // SetInvetory reads the file contents and builds the inventory map
        void SetInventory();
        // Used to take the inventory map and save it to a file
        void saveInventoryToFile();
        // Allows the user to search for a specific item by name and get a integer as the item count
        void itemSearch();
        
};

#endif


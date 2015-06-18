/* 
 * Todays challenge will be something slightly different! Atleast I think the 
 * challenge is meant to be for today? Wait, am I meant to even be submitting 
 * today? Okay maybe I need some help on organising my thoughts before I submit 
 * my challenge. A to-do list would be fine, just something so that I can 
 * organise my thoughts! It should have the following basic functionality
 * Add an item to the to-do list
 * Delete a selected item from the to-do list
 * And obviously, print out the list so I can see what to do!
 * 
 * Author: Sammy Roberts | Github: https://github.com/kekeoki 
 * Email: sammy.roberts@outlook.com
 */

#include <cstdlib>
#include "LinkedList.h"
#include <iostream>


int main(int argc, char** argv) {

    LinkedList l;          // Linked list 
    int menuControl = 0;   // Variable that controls the menu
    std::string tempString;// Holds strings from input
    
    while (menuControl == 0)
    {
        //OUTPUT MENU
        std::cout << "Main Menu" << std::endl;
        std::cout << "To use, press a button 1-5 then enter." << std::endl;
        std::cout << "1. Add to List" << std::endl;
        std::cout << "2. Remove from List (case sensitive)" << std::endl;
        std::cout << "3. View List" << std::endl;
        std::cout << "Enter a number 1-4 to issue a command correlating to the above table: ";
        
        //Grab user input
        std::cin >> menuControl;
        std::cin.ignore(256, '\n');
        std::cout << std::endl << std::endl;
        
        //Decide what to do based on user input
        switch(menuControl)
        {
            case 1: //Add Case
                std::cout << "Enter Item to add to list: ";
                getline(std::cin, tempString);
                l.add(tempString);
                tempString.clear();
                menuControl = 0;
                break;
            case 2: // Remove Case
                std::cout << "Enter Item to be removed from list(case sensitive): ";
                getline(std::cin, tempString);
                l.deleteItem(tempString);
                tempString.clear();
                menuControl = 0;
                break;
            case 3: // Output Case
                std::cout << "Showing List" << std::endl;
                l.viewList();
                menuControl = 0;
                break;
            default:
                std::cout << "Error, Invalid input. Try again";
        }
        std::cout << std::endl << std::endl;
    }
    
    return 0;
}


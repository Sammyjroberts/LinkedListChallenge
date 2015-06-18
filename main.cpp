/* 
 * File:   main.cpp
 * Author: sammy
 *
 * Created on June 15, 2015, 3:45 PM
 */

#include <cstdlib>
#include "LinkedList.h"
#include <iostream>


int main(int argc, char** argv) {

    LinkedList l;
    int menuControl = 0;
    std::string tempString;
    
    while (menuControl == 0)
    {
        std::cout << "Main Menu" << std::endl;
        std::cout << "To use, press a button 1-5 then enter." << std::endl;
        std::cout << "1. Add to List" << std::endl;
        std::cout << "2. Remove from List (case sensitive)" << std::endl;
        std::cout << "3. View List" << std::endl;
        std::cout << "Enter a number 1-4 to issue a command correlating to the above table: ";
        
        std::cin >> menuControl;
        std::cin.ignore(256, '\n');
        std::cout << std::endl << std::endl;
        switch(menuControl)
        {
            case 1:
                std::cout << "Enter Item to add to list: ";
                getline(std::cin, tempString);
                l.add(tempString);
                tempString.clear();
                menuControl = 0;
                break;
            case 2:
                std::cout << "Enter Item to be removed from list(case sensitive): ";
                getline(std::cin, tempString);
                l.deleteItem(tempString);
                tempString.clear();
                menuControl = 0;
                break;
            case 3:
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


/* 
 * File:   LinkedList.h
 * Author: sammy
 *
 * Created on June 15, 2015, 3:45 PM
 */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H
#include <string>
#include "Node.h"

class LinkedList {
public:
    //TODO Properly encapsulate data, making members private and generate
    // getters/setters
    int size = 0;                   // Size of the list UNNEEDED but makes implementation easy
    Node *head = new Node;          // first Node in the list
    Node *search(std::string s);    // Search for a node, specified by a string
    
    void add(std::string n);        // creates and adds a node to the list
    void deleteItem(std::string s); // delete an item from the list
    void viewList();                // Output list to console
    //void reverseList();           // TODO IMPLEMENT
    bool isEmpty();                 // Helper function to check if list is empty
    LinkedList();
private:
};

#endif	/* LINKEDLIST_H */


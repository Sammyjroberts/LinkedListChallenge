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
    int size = 0;
    Node *head = new Node;
    Node *search(std::string s);
    void add(std::string n);
    void deleteItem(std::string s);
    void viewList();
    //void reverseList();
    bool isEmpty();
    LinkedList();
private:
};

#endif	/* LINKEDLIST_H */


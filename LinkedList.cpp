/* 
 * File:   LinkedList.cpp
 * Author: sammy
 * 
 * Created on June 15, 2015, 3:45 PM
 */

#include "LinkedList.h"
#include <iostream>
void LinkedList::add(std::string n)
{
    
    if(isEmpty()) //Empty case, create new node and set that as head
    {
        head = new Node; 
        head->data = n;
        size++;
    }
    else // Standard case
    {
        Node *search = head; //Helper node, find end of list 
                             //(could just use a tail pointer)
        while(search->next != NULL)
        {
            //this loop finds the end of the list
            search = search->next;
        }
        
        Node *temp = new Node; // Create a new node to add to the list
        temp->data = n;        // Place correct data in the list
        temp->next = NULL;     // Set next to NULL
        search->next = temp;   // adds temp to the list
        
        size++; // Increment size
    }
}
void LinkedList::deleteItem(std::string s)
{
    Node *toDelete = search(s); //get node toDelete
    
    if(toDelete == NULL) //Object not found case
    {
        //if item is not found, notify the user
        std::cout << "Item not found" << std::endl;
    }
    else //Delete case
    {
        if(toDelete == head) //Delete from head
        {
            head = head->next; // set head to new head
        }
        else if(toDelete->next == NULL) //Delete from tail
        {
            Node *temp = head; //create temp variable to parse list
            while(temp->next != toDelete)
            {
                //find node before end of list
                temp = temp->next;
            }
            //set found nodes next to null
            temp->next = NULL;

        }
        else //Delete from middle of list
        {
            Node *previous = head; //Node before Node toDelete
            
            while(previous->next != toDelete)
            {
                //find previous node
                previous = previous->next;
            }
            
            //set previous node to toDeletes next node
            previous->next = toDelete->next;
        }
            //Delete the node and decrement the size
            delete toDelete;  
            size--;
    }
}
// TODO can make this more efficient and organized better 
Node *LinkedList::search(std::string s)
{
    Node *search = head;  //Node to parse the list
    bool notFound = true; // boolean to see if we found the string
    
    //Loop through list
    for(int lcv = 0; lcv < size; lcv++)
    {
        //check for data
        if(search->data == s)
        {
            //If found exit loop and set notFound to false
            lcv = size;
            notFound = false;
        }
        else
        {
            //if not found, move to the next member of list
            search = search->next;
        }
        
    }
    //case to set return value to NULL if not found
    if(notFound)
    {
        search = NULL;
    }
    
    return search;
}
//loop through the list and cout the data values
void LinkedList::viewList()
{
    Node *temp = head;
    for(int lcv = 0; lcv < size; lcv++)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}
//void LinkedList::reverseList(); TODO IMPLEMENT THIS

//returns true if the list is empty
bool LinkedList::isEmpty()
{
    return (head == NULL);
}
//Default Constructor
LinkedList::LinkedList()
{
    head = new Node;
    head = NULL;
}

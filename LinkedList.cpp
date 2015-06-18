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
    
    if(isEmpty())
    {
        head = new Node; 
        head->data = n;
        size++;
    }
    else
    {
        Node *search = head;
        while(search->next != NULL)
        {
            search = search->next;
        }
        Node *temp = new Node;
        temp->data = n;
        temp->next = NULL;
        search->next = temp;
        
        size++;
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
Node *LinkedList::search(std::string s)
{
    Node *search = head;
    bool notFound = true;
    
    for(int lcv = 0; lcv < size; lcv++)
    {
        if(search->data == s)
        {
            lcv = size;
            notFound = false;
        }
        else
        {
            search = search->next;
        }
        
    }
    if(notFound)
    {
        search = NULL;
    }
    return search;
}
void LinkedList::viewList()
{
    Node *temp = head;
    for(int lcv = 0; lcv < size; lcv++)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}
//void LinkedList::reverseList();
bool LinkedList::isEmpty()
{
    return (head == NULL);
}
LinkedList::LinkedList()
{
    head = new Node;
    head = NULL;
}

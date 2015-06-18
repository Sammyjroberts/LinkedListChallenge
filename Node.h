/* 
 * File:   Node.h
 * Author: sammy
 *
 * Created on June 15, 2015, 5:19 PM
 */

#ifndef NODE_H
#define	NODE_H
#include <string>
class Node {
public:
    //Treating this class as a struct, thus the members remain public.
    std::string data;       // Data to hold in string 
    Node *next = NULL;      // Pointer to the next node in the list
   // ~Node();
private:

};

#endif	/* NODE_H */


#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct Node
{
    unsigned int value;  
    Node* next;          
};



// start list
Node* initList(unsigned int value);
//overload- if you have next node
Node* initList(unsigned int value, Node* next);

// delete list
void cleanList(Node* head);

// add to list
void add(Node* head, unsigned int value);

// remove from list
int remove(Node* head);

// check if empty
bool isEmpty(const Node* head);


#endif // LINKEDLIST_H

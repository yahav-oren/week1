#include "LinkedList.h"
#include <iostream>


//initialises the first (head) part of the list
//input: value, next node
//output: the head of the list
Node* initList(unsigned int value,Node* next)
{

    Node* n = new Node;
    n->value = value;
    n->next = next;
    return n;
}
//initializes the head
//input:value
//output: the head
Node* initList(unsigned int value) {
    Node* n = new Node;
    n->value = value;
    n->next = nullptr;
    return n;
}


//cleans up list
//input: head
//output: none
void cleanList(Node* head)
{
    Node* pos = head;
    while (pos != nullptr)
    {
        Node* temp = pos;
        pos = pos->next;
        delete temp;
    }
}

//adds to front of list
//input: head of list and value of new node
void add(Node* head, unsigned int value)
{
    Node* newhead = new Node;
    newhead->value = value;
    newhead->next = head;

}

//removes front of list
//input: head
//output: the value of removed head (-1) if errors
int remove(Node* head)
{
    //list is empty
    if (head == nullptr)
        return -1; 

    Node* temp = head;
    unsigned int value = temp->value;

    head = temp->next;
    delete temp;

    return value;
}

//checks if the list is empty
//input: head
//output: if head is null (only happens when list is empty)
bool isEmpty(const Node* head)
{
    return head == nullptr;
}



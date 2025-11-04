#include "Stack.h"
#include <iostream>

//creates the stack 
//input: node
//output: intialaized stack
Stack* initStack()
{
    Stack* s = new Stack{ nullptr };
    return s;
}
//creates stack with known first node
//input: top most node
//output: inited stack
Stack* initStack(Node* s) {
    Stack* a = new Stack{ s };
    return a;
}

//crreates stack from existing stack entity
//input: stack
//output: none
void initStack(Stack* s)
{
    s->topper = nullptr;
}

//deletes the stack
//input: stack
//output: none
void cleanStack(Stack* s)
{
    while (s->topper != nullptr)
    {
        Node* temp = s->topper;
        s->topper = s->topper->next;
        delete temp;
    }
}
//checks if the stack is empty
//input: stack
//output: if the stack is empty (t\f)
bool isEmpty(Stack* s)
{
    return s->topper == nullptr;
}

//insert a node into the stack
//input: stack, int you want to insert
//output: none
void push(Stack* s, unsigned int element)
{
    Node* newNode = new Node;
    newNode->value = element;
    newNode->next = s->topper;
    s->topper = newNode;
}

//extrude a node from stack
//input: stack
//output: the extruded node value
int pop(Stack* s)
{
    if (isEmpty(s))
        return -1;

    unsigned int value = s->topper->value;
    Node* temp = s->topper;
    s->topper = s->topper->next;
    delete temp;

    return value;
}

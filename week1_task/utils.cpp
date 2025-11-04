#include "Utils.h"
#include "Stack.h"
#include <iostream>

//reverses input array
//input: int[] nums, size
//output: none
void reverse(int* nums, unsigned int size)
{
    Stack s;
    initStack(&s);

    for (unsigned int i = 0; i < size; ++i)
    {
        push(&s, nums[i]);
    }


    for (unsigned int i = 0; i < size; ++i)
    {
        nums[i] = pop(&s);
    }

    cleanStack(&s);
}

//reverses 10 length array from input
//input: none
//output: reversed array
int* reverse10()
{
    const unsigned int SIZE = 10;
    int* nums = new int[SIZE];  

    std::cout << "Please enter 10 integers:\n";
    for (unsigned int i = 0; i < SIZE; ++i)
    {
        std::cin >> nums[i];
    }

    reverse(nums, SIZE);

    return nums;
}

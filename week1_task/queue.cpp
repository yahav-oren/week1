#include <iostream>
#include "queue.h"






void initQueue(Queue* q, unsigned int size) {
		q->elements = new unsigned int[size];
		q->count = 0;
		q->maxsize = size;
}

void cleanQueue(Queue* q) {
	delete[] q->elements;
	q->count = 0;
	q->elements = nullptr;
	q->maxsize = 0;
}


void enqueue(Queue* q,unsigned int newValue) {
	if (isFull(q))
	{		
		return;
	}
	// add element to queue and increase count by 1
	q->elements[q->count++] = newValue;


}

bool isFull(Queue* q) {
	if (q->count == q->maxsize)
		return true;
	return false;

}
bool isEmpty(Queue* q) {
	if (q->count == 0)
		return true;
	return false;
}

int dequeue(Queue* q) {
	if (isEmpty(q))
		return -1;

	unsigned int value = q->elements[0];

	// move elements to front of queue
	for (unsigned int i = 1; i < q->count; ++i)
		q->elements[i - 1] = q->elements[i];

	q->count--;
	return value;


}
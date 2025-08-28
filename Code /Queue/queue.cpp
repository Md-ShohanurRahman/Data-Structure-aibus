#include <iostream>
using namespace std;

const int MaxSize = 4;
int Queue[MaxSize];
int front = -1, rear = -1;

// Check if queue is empty
bool isEmpty() {
    return (front == -1 && rear == -1);
}

// Check if queue is full
bool isFull() {
    return (rear == MaxSize - 1);
}

// Add element to the queue
void enqueue(int x) {
    if (isFull()) {
        cout << "Error: Queue full! Cannot enqueue " << x << endl;
    } 
    else if (isEmpty()) {
        front = rear = 0;
        Queue[rear] = x;
        cout << "Enqueued " << x << " at position " << rear << endl;
    } 
    else {
        rear++;
        Queue[rear] = x;
        cout << "Enqueued " << x << " at position " << rear << endl;
    }
}

// Remove element from the queue
void dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue is empty! Dequeue not possible" << endl;
    } 
    else if (front == rear) {
        cout << "Dequeued " << Queue[front] << " (queue becomes empty)" << endl;
        front = rear = -1;
    } 
    else {
        cout << "Dequeued " << Queue[front] << " from position " << front << endl;
        front++;
    }
}

// Show front element
void frontElement() {
    if (isEmpty()) {
        cout << "Error: Queue is empty! No front element" << endl;
    } 
    else {
        cout << "Front element is: " << Queue[front] << endl;
    }
}

// Show all elements in the queue
void showQueue() {
    if (isEmpty()) {
        cout << "Error: Cannot show queue because it is empty" << endl;
    } 
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << Queue[i] << " ";
        }
        cout << endl;
    }
}

// Main simulation
int main() {
    // Initialize queue (front and rear already set to -1)
    cout << "Queue initialized (front = rear = -1)" << endl;

    enqueue(3);   // front=0, rear=0
    enqueue(6);   // rear=1
    enqueue(2);   // rear=2
    enqueue(5);   // rear=3
    enqueue(9);   // queue full
    showQueue();

    dequeue();    // front=1
    dequeue();    // front=2
    dequeue();    // front=3
    dequeue();    // front=rear=-1
    dequeue();    // queue empty
    showQueue();

    return 0;
}

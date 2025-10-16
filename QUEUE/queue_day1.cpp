#include <iostream>
using namespace std;
void enqueue(int value)
{
    int front = -1;
    int rear = -1;
    if (rear == value - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear++;
            rear++;
            cout << "Inserted element at position " << rear << endl;
        }
    }
    void dequeue()
    {
        cout << "Dequeued an element" << endl;
    }
    void display()
    {
        cout << "Displaying all elements of queue" << endl;
    }

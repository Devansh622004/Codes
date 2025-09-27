#include <iostream>
using namespace std;

class queue
{
private: // By Default
    int size;
    int front;
    int rear;
    int *Q;

public:
    queue() // Constructor For Initialization
    {
        rear = front = -1;
        size = 10;
        Q = new int[size]; //  Creates an array of type int with size elements.
                           // Memory is allocated on the heap (not on stack).
                           // Returns a pointer to the first element of that array.
    }
    queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
    void display();
};

void queue::enqueue(int x) // :: --> Scope Resolution Operator is Used Whenever a Member Func. is Defined Outside the Class.
{
    if (rear == size - 1) // Checking 'Overflow' Condition.
    {
        cout << "Queue is Full.\n";
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}

int queue::dequeue()
{
    int x = -1;
    if (front == rear) // Checking For 'Underflow' Condition.
    {
        cout << "Queue is Empty.\n";
    }
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}

void queue::display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << endl;
    }
}

int main()
{
    queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    return 0;
}
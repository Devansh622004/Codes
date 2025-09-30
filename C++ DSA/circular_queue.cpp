#include <iostream>
using namespace std;

class queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    queue() // Default constructor
    {
        front = rear = 0;   // Changed from -1 to 0
        size = 10;
        Q = new int[size];
    }
    queue(int size)
    {
        front = rear = 0;   // Changed from -1 to 0
        this->size = size;
        Q = new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void queue::enqueue(int x)
{
    if ((rear + 1) % size == front) // Circular Queue Full Condition
    {
        cout << "Queue is Full.\n";
    }
    else
    {
        rear = (rear + 1) % size; // move circularly
        Q[rear] = x;
    }
}

int queue::dequeue()
{
    int x = -1;
    if (front == rear) // Empty condition
    {
        cout << "Queue is Empty.\n";
    }
    else
    {
        front = (front + 1) % size; // move circularly
        x = Q[front];
    }
    return x;
}

void queue::display()
{
    int i = (front + 1) % size;
    while (i != (rear + 1) % size)
    {
        cout << Q[i] << " ";
        i = (i + 1) % size; // move circularly
    }
    cout << endl;
}

int main()
{
    queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    q.enqueue(50);
    q.enqueue(60); // reuses freed space
    q.display();

    return 0;
}

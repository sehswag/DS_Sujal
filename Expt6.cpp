#include <iostream>
using namespace std;

#define MAX 5

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if(rear == MAX-1)
            cout << "Queue Full\n";
        else {
            if(front == -1)
                front = 0;

            arr[++rear] = x;
        }
    }

    void dequeue() {
        if(front == -1 || front > rear)
            cout << "Queue Empty\n";
        else
            cout << "Deleted: " << arr[front++] << endl;
    }

    void display() {
        for(int i=front;i<=rear;i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}

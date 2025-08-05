#include <iostream>
using namespace std;

class Queue{
    int front, rear, size;
    int *queue;

    public:
        Queue(int size){
            this->size = size;
            front = -1;
            rear = -1;
            queue = new int[size];
        }

        bool isFull(){
            return rear == (size-1);
        }

        bool isEmpty(){
            return front == -1 || (front > rear);
        }

        void enqueue(int element){
            if (isFull()){
                cout << "Queue is Full" << endl;
            }
            if (isEmpty()){
                front = 0;
            }
            queue[++rear] = element;
        }

        int dequeue(){
            if (isEmpty()){
                cout << "Queue is Empty" << endl;
                return 0;
            }
            if (front == rear){
                int removedElement = queue[front];
                front = rear = -1;
                return removedElement;
            }
            return queue[front++];
        }

        int getFront(){
            if (isEmpty()){
                cout << "Queue is Empty" << endl;
                return -1;
            }
            return queue[front];
        }

        int getRear(){
            if (isEmpty()){
                cout << "Queue is Empty" << endl;
                return -1;
            }
            return queue[rear];
        }
};

int main(){
    Queue q(5);
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(1);
    q.enqueue(10);
    q.dequeue();
    cout << q.getFront() << endl;
    return 0;
}

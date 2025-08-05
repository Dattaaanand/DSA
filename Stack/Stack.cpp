#include <iostream>
using namespace std;

class Stack{
    int top, size;
    int *stack;

public:
    Stack(int size){
        this->size = size;
        top = -1;
        stack = new int[size];
    }

    bool push(int element)
    {
        if (top >= size - 1)
        {
            cout << "Stack Overflow";
            return false;
        }
        stack[++top] = element;
        return true;
    }

    int pop(){
        if (isEmpty())
        {
            cout << "Stack Underflow";
            return 0;
        }
        return stack[top--];
    }

    int peek(){
        if (top < 0)
        {
            return 0;
        }
        return stack[top];
    }

    bool isEmpty(){
        if (top < 0)
        {
            return true;
        }
        return false;
    }
};

int main(){
    Stack s(5);
    s.push(5);
    s.push(2);
    s.push(6);
    s.push(1);
    while (!s.isEmpty()){
        cout <<  s.peek() << " " << endl ;
        s.pop();
    }
    return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertFirst(int element)
    {
        Node *newNode = new Node(element);

        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        this->head = newNode;
    }

    void insertLast(int element)
    {
        Node *newNode = new Node(element);
        Node *currNode = head;
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        while (!(currNode->next == NULL))
        {
            currNode = currNode->next;
        }
        currNode->next = newNode;
        newNode->next = NULL;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << "->";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.insertFirst(5);
    list.insertFirst(3);
    list.insertFirst(1);
    list.insertFirst(9);
    list.insertLast(2);
    list.printList();
    return 0;
}
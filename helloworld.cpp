#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
    Node *prev = NULL; // Added prev pointer
};

struct DoubleLinkedList
{
    Node* head = NULL;
    Node* tail = NULL;

    void addFront(int newData)
    {
        Node* newNode = new Node;
        newNode->data = newData;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        cout << "Head: " << head->data << endl;
        cout << "Tail: " << tail->data << endl;
    }

    void addBack(int newData)
    {
        Node* newNode = new Node;
        newNode->data = newData;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }

        cout << "Head: " << head->data << endl;
        cout << "Tail: " << tail->data << endl;
    }

    void printList()
    {
        Node* current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void printListReverse()
    {
        Node* current = tail;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

};

int main()
{
    DoubleLinkedList list;
    list.addFront(1);
    list.addFront(2);
    list.addBack(3);
    list.printList(); // Corrected from List to list

    return 0;
}
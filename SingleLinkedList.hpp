#include<iostream>
using namespace std;
#include <vector>
struct Node
{
    int data;
    Node *next;

    Node()
    :data{}
    ,next{nullptr}
    {        
    }
    Node(int x)
    :data{x}
    ,next{nullptr}
    {        
    }
 
};

class Csinglelinkedlist
{
    public:
    Node *head{nullptr};

    void instertnodeatstart(int data)
    {
        Node *newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    }
    void instertnodeatend(int data)
    {
        Node *newnode = new Node(data);
        if(head == nullptr)
        {
            head = newnode;
            return;
        }
        Node *last = head;
        while(last->next != nullptr)
        {
            last  = last->next;

        }
        last->next = newnode; 

    }
    void deletenode(int data);
    bool search(int data)
    {
        Node *current = head;
        while(current != nullptr)
        {
            if(current->data == data)
            {
                return true;
            }
           current =  current->next;

        }
        return false; // if element is not found
    }
    void traverse()
    {
        Node *current = head;
        while(current != nullptr)
        {
            cout << current->next<<"\t"<<current->data <<endl;
            current =  current->next;
        }
    }

};
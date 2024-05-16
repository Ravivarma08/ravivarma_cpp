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

int main()
{
    cout<<"Hello Ravi Varma"<<endl;
    int a{};
    Node *head = nullptr;
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;

    // connecting nodes
    head = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;
    // add data to nodes
    first->data = 1;
    second->data = 2;
    third->data = 3;

    // deleting memory in heap
    delete head,first,second,third;

    return 0;
}

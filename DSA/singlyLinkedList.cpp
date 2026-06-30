#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;
};

class LinkedList{

    Node* head = NULL;

    // insert()
    void insert(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        // if list is empty
        if(head == NULL){
            head = newNode;
            return ;
        }
        head->next = newNode;

    }

};
int main(int argc, char const *argv[])
{
    LinkedList list;
    // list.insert();
    return 0;
}

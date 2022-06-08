#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}


int main(){
    Node* head = NULL;

    push(&head, 7);
    push(&head, 10);

    cout<<"Created Linked list is: ";
    printList(head);

    return 0;
}

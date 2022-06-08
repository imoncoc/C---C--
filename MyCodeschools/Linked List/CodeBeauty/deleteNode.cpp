#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
};

void PrintList(Node *n){
    while(n != NULL){
        cout<<n->value<<" ";
        n = n->next;
    }
}

void deleteNode(Node** head_ref, int key){
    // 1. Store head Node
    Node* temp = *head_ref;
    Node* prev = NULL;

    // 2. If head node itself holds
    // the key to be deleted
    if(temp != NULL && temp->value == key){
        *head_ref = temp->next; //change head
        delete temp;  // free old head
        return;
    }

    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
    else {
        while(temp != NULL && temp-> value != key){
            prev = temp;
            temp = temp-> next;
        }

        // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    // Free memory
    delete temp;
    }

}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head-> value = 1;
    head-> next = second;
    second-> value = 2;
    second-> next = third;
    third-> value = 3;
    third-> next = NULL;



    PrintList(head);
    deleteNode(&head, 5);
    cout<<endl;
    PrintList(head);



    return 0;
}


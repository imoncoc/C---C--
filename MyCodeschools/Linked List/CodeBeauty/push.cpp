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

void Push(Node** head_ref, int new_data){
    //1. Prepare a newNode
    Node* new_node = new Node();
    new_node->value = new_data;
    //2. Put it in front of current head
    new_node-> next = (*head_ref);
    //3. Move head of the list to point to the newNode
    (*head_ref) = new_node;
}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head-> value = 10;
    head-> next = second;
    second-> value = 20;
    second-> next = third;
    third-> value = 30;
    third-> next = NULL;

    Push(&head, 8);
    Push(&head, 5);

    PrintList(head);



    return 0;
}

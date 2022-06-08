#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};

int Push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void InsertAtEnd(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    Node* last = *head_ref;

    while(last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
}

void PrintList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Push(&head, 8);

    InsertAtEnd(&head, 40);
    InsertAtEnd(&head, 50);
    PrintList(head);



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int size = 0;
class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
    size++;
    return;
}

void reverseList(Node** head){
    Node* current_node = *head;
    Node* next_node = NULL;
    Node* prev_node = NULL;
    while(current_node != NULL){
        next_node = current_node->next;
        cout<<"next_node: "<<next_node<<endl;
        current_node->next = prev_node;
        cout<<"current_node->next: "<<current_node->next<<endl;
        prev_node = current_node;
        cout<<"prev_node: "<<prev_node<<endl;
        current_node = next_node;
        cout<<"current_node: "<<current_node<<endl<<endl;
    }

    *head = prev_node;
}

void printList(Node* n){
    cout<<endl;
    while( n != NULL ){
        //cout<<n->data<<" ";
        cout<<"data: "<<n->data<<" "<<"next: "<<n->next<<endl;
        n = n->next;
    }
}
int main(){
    Node* head = NULL;

    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);


    printList(head);

   reverseList(&head);

    printList(head);


    return 0;
}


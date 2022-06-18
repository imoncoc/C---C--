#include<bits/stdc++.h>
using namespace std;
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
}

void printList(Node* temp){
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    printList(head);



    return 0;
}

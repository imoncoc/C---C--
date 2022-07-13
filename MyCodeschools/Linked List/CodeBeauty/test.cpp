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

Node* removeNode(Node* head_ref, int value){
    if(head_ref == NULL) return head_ref;

    while(head_ref != NULL && head_ref->data == value){
        head_ref = head_ref->next;
    }

    Node* temp = head_ref;

    while(temp != NULL){
        if(temp->next && temp->next->data == value){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
        }
    }

    return head_ref;
}

void printList(Node* n){
    while( n != NULL ){
        cout<<n->data<<" ";
        //cout<<"data: "<<n->data<<" "<<"next: "<<n->next<<endl;
        n = n->next;
    }
}
int main(){
    Node* head = NULL;

    push(&head, 20);
    push(&head, 50);
    push(&head, 40);
    push(&head, 20);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    push(&head, 20);


    removeNode(head, 20);


    printList(head);



    return 0;
}

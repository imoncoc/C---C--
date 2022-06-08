
#include<iostream>
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

 Node* removeLastNode(Node* head_ref){
     if(head_ref == NULL){
            cout<<"List is empty"<<endl;
        return NULL;
     }
     if(head_ref->next == NULL){
        delete head_ref;
     cout<<"List is empty"<<endl;
        return NULL;
     }

     Node* second_last = head_ref;
     while(second_last->next->next != NULL){
        second_last = second_last->next;
     }

     delete second_last->next;
     second_last->next = NULL;

     return head_ref;
 }


void printList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main(){
    //Node* head = NULL;
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second-> next = third;

    third->data = 30;
    third-> next = NULL;

    push(&head, 5);
    push(&head, 2);

    removeLastNode(head);
    printList(head);


    return 0;
}


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
    new_node->next =  *head_ref;
    *head_ref = new_node;
}

void printList (Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 30;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 10;
    third->next = NULL;

    push(&head, 40);
    push(&head, 50);
    push(&head, 60);
    push(&head, 70);

    printList(head);


    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<endl<<"Middle Elements: "<<slow->data<<endl;


    return 0;
}


#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node-> data = new_data;
    new_node-> next = *head_ref;
    *head_ref = new_node;
}
void printList(Node* n){
    if(n == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
int main(){
    Node* head = NULL;
    push(&head, 20);
    printList(head);



    return 0;
}

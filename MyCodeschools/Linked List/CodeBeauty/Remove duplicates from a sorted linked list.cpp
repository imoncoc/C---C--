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

void removeDublicates(Node* head){
    Node* current_node = head;
    Node* next_node = NULL;

    if(current_node == NULL ){
        return;
    }

    while(current_node->next != NULL){
        if(current_node->data == current_node->next->data){
            next_node = current_node->next->next;
            delete(current_node->next);
            current_node->next = next_node;
            size--;
        }
        else {
            current_node = current_node->next;
        }
    }
}



void printList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main(){
    Node* head = NULL;

    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);

    printList(head);
    cout<<endl<<"size: "<<size<<endl;

    removeDublicates(head);
    cout<<"deleted: "<<endl;
    printList(head);
    cout<<endl<<"size: "<<size<<endl;





    return 0;
}


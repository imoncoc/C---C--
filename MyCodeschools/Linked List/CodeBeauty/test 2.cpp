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

Node* removeFirstNode(Node *&head_ref){
    if(head_ref == NULL){
        cout<<"List is empty."<<endl;
        return NULL;
    }
    Node* temp = head_ref;
    head_ref = head_ref->next;
    delete temp;
    return head_ref;
}

Node* removeLastNode(Node *head_ref){
    if(head_ref == NULL){
        return NULL;
    }
    if(head_ref->next == NULL){
        delete head_ref;
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

void printList(Node* temp){
    if(temp == NULL){
        cout<<"List is empty"<<endl;
    }
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

    removeLastNode(head);
    removeLastNode(head);

    printList(head);



    return 0;
}

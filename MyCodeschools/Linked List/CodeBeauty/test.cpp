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

void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    size++;

    if(*head_ref == NULL){
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    Node* temp = *head_ref;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node** head_ref, int position, int new_data){
    if(position < 0 || position > size + 1){
        cout<<"Invalid position"<<endl;
        return;
    }
    else{
        while(position--){
            if(position == 0){
                Node* new_node = new Node();
                new_node->data = new_data;
                new_node->next = *head_ref;
                *head_ref = new_node;
            }
            else{
                head_ref = &(*head_ref)->next;
            }
        }
        size++;
    }
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

Node* removeLastNode(Node *&head_ref){
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
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
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
    size = 3;

    push(&head, 9);
    push(&head, 8);
    append(&head, 40);
    append(&head, 50);
    insertAtPosition(&head, 5, 25);
    cout<<"SIze: "<<size<<endl;

    cout<<"Before Node: ";
    printList(head);
    cout<<endl;

    removeFirstNode(head);

    cout<<"After deleted first Node: ";
    printList(head);
    cout<<endl;

    removeLastNode(head);

    cout<<"After deleted Last Node: ";
    printList(head);
    cout<<endl;



    return 0;
}

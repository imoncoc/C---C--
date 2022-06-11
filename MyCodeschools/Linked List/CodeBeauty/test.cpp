#include<iostream>
using namespace std;
int size = 0;
class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int newData){

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
    size++;
    return;
}

void append(Node** head_ref, int newData){
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    if(*head_ref == NULL){
        newNode->next = *head_ref;
        *head_ref = newNode;
        return;
    }

    Node* temp = *head_ref;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    size++;
    return;
}

void insertAtPosition(Node** head_ref, int position, int new_Data){
    if(position < 0 || position > size + 1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    else{
        while(position--){
            if(position == 0){
                Node* new_Node = new Node();
                new_Node->data = new_Data;
                new_Node->next = *head_ref;
                *head_ref = new_Node;
            }
            else{
                head_ref = &(*head_ref)->next;
            }
        }
        size++;
    }

}

void printList(Node* temp){
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;


    push(&head, 20);
    push(&head, 10);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);
    insertAtPosition(&head, 3, 25);

    printList(head);

    cout<<endl<<"Size: "<<size<<endl;




    return 0;
}

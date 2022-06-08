#include<iostream>
using namespace std;
int size = 0;
class Node{
public:
    int data;
    Node* next;
};

void printList(Node* n){
    while (n != NULL){
            cout<<n->data<<" ";
        n = n->next;
    }
}

Node* getNode(int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

void insertAtPosition(Node** head_ref, int position, int new_data){
    if(position < 1 || position > size + 1){
        cout<<"Invalid Position!"<<endl;
    }else{
        while(position--){
            if(position == 0){
                Node* temp = getNode(new_data);
                temp->next = *head_ref;
                *head_ref = temp;
            }else{
                head_ref = &(*head_ref)->next;
            }

        }
        size++;
    }
}

void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    Node *temp = *head_ref;
    while(temp->next != NULL){
        temp =  temp->next;
    }
    temp->next = new_node;
}

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node-> data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
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

    push(&head, 8);
    append(&head, 40);
    size = 5;
    insertAtPosition(&head, 6, 100);

printList(head);




    return 0;
}

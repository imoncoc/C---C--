#include<iostream>
using namespace std;
int size = 0;
class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data){
    size++;
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void append(Node** head_ref, int new_data){
    size++;
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    Node* temp = *head_ref;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}

void insertAtPosition(Node** head_ref, int position, int new_data){
    if(position < 1 || position > size + 1 ){
        cout<<"Invalid Position"<<endl;
        return;
    }else{
        while(position--){
            if(position == 0){
                Node* new_node = new Node();
                new_node->data = new_data;
                new_node->next = *head_ref;
                *head_ref = new_node;
            }else{
                head_ref = &(*head_ref)->next;
            }
        }
        size++;
    }
}

Node* removeFirstNode(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

void printList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
int main(){
    Node* head = NULL;

    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    append(&head, 40);
    insertAtPosition(&head, 3, 25);

    printList(head);

    removeFirstNode(head);
    cout<<endl;
    printList(head);



    return 0;
}


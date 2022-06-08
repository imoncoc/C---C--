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

Node* deleteEndNode(Node* head){
    if(head == NULL){
        cout<<"Node is Empty"<<endl;
        return NULL;
    }
    size--;
    if(head->next == NULL){
        delete head;
        cout<<"Node is empty, After delete last Node."<<endl;
        return NULL;
    }

    Node* last = head;
    while(last->next->next != NULL){
        last = last->next;
    }

    delete (last->next);
    last->next = NULL;
    return head;
}

void printList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;

    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    append(&head, 40);
    insertAtPosition(&head, 3, 25);

    printList(head);

    deleteEndNode(head);
    printList(head);
    cout<<"Size: "<<size<<endl;

    deleteEndNode(head);
    printList(head);
    cout<<"Size: "<<size<<endl;

    deleteEndNode(head);
    printList(head);
    cout<<"Size: "<<size<<endl;

    deleteEndNode(head);
    printList(head);
    cout<<"Size: "<<size<<endl;

    deleteEndNode(head);
    //printList(head);
    cout<<"Size: "<<size<<endl;


    return 0;
}

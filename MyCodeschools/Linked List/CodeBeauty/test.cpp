#include<iostream>
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
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}

void insertAtPosition(Node** head_ref, int position, int new_data){
    if(position < 1 || position > size + 1){
        cout<<"Invalid position."<<endl;
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

Node* removeFirstNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    size--;
    return head;
}

Node* removeLastNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    size--;
    if(head->next == NULL){
        delete head->next;
        head = NULL;
        return head;
    }

    Node* second_last = head;
    while(second_last->next->next != NULL){
        second_last = second_last->next;
    }
    delete second_last->next;
    second_last->next = NULL;
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
    append(&head, 50);

    insertAtPosition(&head, 6, 25);

    head = removeFirstNode(head);

    head = removeLastNode(head);
    head = removeLastNode(head);
    head = removeLastNode(head);
    head = removeLastNode(head);
    head = removeLastNode(head);


    printList(head);
    cout<<endl<<"size: "<<size<<endl;




    return 0;
}

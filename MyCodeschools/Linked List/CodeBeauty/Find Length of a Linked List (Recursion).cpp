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
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int getCount(Node* temp, int count = 0){
    if(temp == NULL){
        return count;
    }

    return getCount(temp->next, count+1);
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

    printList(head);

    int count = getCount(head);

    cout<<endl<<"Count: "<<count<<endl;


    return 0;
}



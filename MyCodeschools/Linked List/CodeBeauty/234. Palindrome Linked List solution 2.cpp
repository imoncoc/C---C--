#include<bits/stdc++.h>
using namespace std;
vector<int> myVector;
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

void printList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        myVector.push_back(n->data);
        n = n->next;
    }
}
int main(){
    Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 2);
    push(&head, 1);
    vector<int> ans;


    printList(head);



    for(int i = 0; i < myVector.size(); i++){
        ans.push_back(myVector[i]);
    }

    reverse(ans.begin(), ans.end());
    int count = 0;

    for(int i = 0; i < ans.size(); i++){
        if(myVector[i] == ans[i])count++;
    }

    if(count == ans.size()){
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number isn't palindrome!"<<endl;
    }




    return 0;
}


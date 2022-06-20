#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
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
        arr.push_back(n->data);
        n = n->next;
    }
}
int main(){
    Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 2);
    push(&head, 2);
    push(&head, 2);

    printList(head);
    string res = "YES";



    int count = 0;
    int n = arr.size();
    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n-i-1]){
            res = "NO";
        }
    }

    cout<<endl<<res<<endl;








    return 0;
}



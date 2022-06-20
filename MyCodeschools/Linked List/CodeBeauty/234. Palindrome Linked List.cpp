#include<bits/stdc++.h>
using namespace std;
string res = "";
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
        res +=  to_string(n->data);
        n = n->next;
    }
}
int main(){
    Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 2);
    push(&head, 1);


    printList(head);

    cout<<"res: "<<res<<endl;
    string ans = res;
    reverse(ans.begin(), ans.end());
    cout<<"ans: "<<ans<<endl;

    if(res == ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}

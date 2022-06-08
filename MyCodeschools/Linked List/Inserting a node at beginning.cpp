#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node* head; //global variable,can be accessed anywhere
void Insert (int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp -> next = head;
    head = temp;
}
void Print(){
    struct Node* temp = head;
    cout<<"List is: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    head = NULL; // empty list
    cout<<"How many numbers"<<endl;
    int n, x;
    cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"Enter the number"<<endl;
        cin>>x;
        Insert(x);
        Print();
    }
}

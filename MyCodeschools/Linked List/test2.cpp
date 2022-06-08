#include<iostream>
using namespace std;
class Node{
public:
    int Value;
    Node* Next;
};

void print(Node* n){
    while(n != NULL){
        cout<<n->Value<<endl;
    n = n-> Next;
    }

}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head-> Value = 10;
    head-> Next = second;
    second-> Value = 20;
    second-> Next = third;
    third-> Value = 30;
    third-> Next = NULL;

    print(head);




    return 0;
}

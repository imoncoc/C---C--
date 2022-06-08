#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head = NULL;

void insertBeg (int d)
{
    Node *ptr = new Node();
    ptr->data=d;
    ptr->link=head;
    head=ptr;
}

void dispLink()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<"\n";
}

int main()
{
   /* node *ptr = new node();
    ptr -> data = 20;
    ptr -> link = NULL;
    head = ptr;

    node *current = new node();
    current -> data =30;
    current -> link = NULL;
    head -> link = current;

    //cout<<"data is : "<<head->data<<endl;
    //cout<<"data is : "<<current->data<<endl; */

    insertBeg(10);
    dispLink();


    return 0;
}


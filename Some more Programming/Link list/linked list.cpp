#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};

node *head=NULL;

int main()
{
    node *ptr=new node();
    ptr->data = 2;
    ptr -> link = NULL;
    head = ptr;

    cout<<"data is : "<<head->data;



    return 0;
}

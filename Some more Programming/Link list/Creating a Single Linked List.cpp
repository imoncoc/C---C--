#include<iostream>
#include <stdlib.h>

using namespace std;
struct node
{
    int data;
    struct node *link;
};

void count_data (struct node *head)
{
    int count = 0;
    if (head == NULL)
        cout<<"Linked List is empty";
    struct node *ptr = NULL;
    ptr =head;
    while (ptr!=NULL)
    {
        count++;
        ptr = ptr ->link;
    }
    cout<<"Total Data = " << count << endl;
}

void print_data(struct node *head)
{
    if (head == NULL)
    {
        cout<<"Lined is empty";
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr= ptr -> link;
    }
    cout<<endl;
}

int main()
{

    struct node *head = new node();// (struct node *)malloc(sizeof(struct node));;
    head -> data = 45;
    head -> link = NULL;

    struct node *current = new node(); //(struct node *)malloc(sizeof(struct node));
    current -> data =98;
    current -> link = NULL;
    head -> link = current;

    current = new node(); //(struct node *)malloc(sizeof(struct node));
    current -> data =3;
    current -> link = NULL;


    head -> link ->link = current;

    count_data(head);
    print_data(head);


    return 0;
}


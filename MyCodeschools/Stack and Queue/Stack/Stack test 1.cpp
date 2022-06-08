#include<iostream>
using namespace std;
class stack
{
private:
    int top;
    int arr[5];

public:
    stack()
    {
        top=-1;
        for (int i=0; i<5; i++)
        {
            arr[i]=0;
        }
    }

    bool isEmpty()
    {
        if (top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top==4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        if (isFull())
        {
            cout<<"Stack is Overflow."<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout<<"Stack is Underflow."<<endl;
            return 0;
        }
        else
        {
            int popValue=arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
    }

    int count()
    {
        return top+1;
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos, int val)
    {
        arr[pos]=val;
                 cout<<"value changed at location"<<pos<<endl;
    }
    void display()
    {
        cout<<"All value in the stack are - "<<endl;
        for (int i=4; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }




};


int main()
{
    stack s1;
    int option,value,position;

    do
    {
        cout<<"What operation do you want to perform? select option number. Enter 0 to exit."<<endl;
        cout<<"1. Push()"<<endl;
        cout<<"2. Pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. Count()"<<endl;
        cout<<"7. Change()"<<endl;
        cout<<"8. Display()"<<endl;
        cout<<"9. Clear Screen()"<<endl;

        cin>>option;
        switch(option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter an item to push in the stack"<<endl;
            cin>>value;
            s1.push(value);
            break;
        case 2:
             cout<<"Pop Function Called - Poped Value : "<<s1.pop()<<endl;
            break;
        case 3:
            if (s1.isEmpty())
                cout<<"Stack is Empty"<<endl;
                else
                cout<<"Stack is not Empty"<<endl;
            break;
        case 4:
            if (s1.isFull())
                cout<<"Stack is Full"<<endl;
            else
                cout<<"Stack is not Full"<<endl;
            break;
        case 5:
            cout<<"Enter position of item you want to peek"<<endl;
            cin>>position;
            cout<<"Peek Function Called - "<<endl<<s1.peek(position)<<endl;
            break;
        case 6:
            cout<<"Count Function Called - Number of Item in the Stack are: "<<s1.count()<<endl;
            break;
        case 7:
            cout<<"Change Function Called - "<<endl;
            cout<<"Enter position of item you want to change: "<<endl;
            cin>>position;
            cout<<endl;
            cout<<"Enter value of item you want change : ";
            cin>>value;
            s1.change(position,value);
            break;
        case 8:
            cout<<"Display Function Called-"<<endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout<<"Enter Proper Option number."<<endl;
            break;
        }







    }
    while (option!=0);



        return 0;
}


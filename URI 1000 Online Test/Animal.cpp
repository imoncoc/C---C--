#include<iostream>
using namespace std;
int main()
{
    string vertebrado,n;

    cin>>n;

    if (n=="vertebrado")
    {
        cin>>n;
        {
            if (n=="ave")
            {
                cin>>n;
                {
                    if (n=="carnivoro")
                    {
                        cout<<"aguia"<<endl;
                    }
                    else if (n=="onivoro")
                    {
                        cout<<"pomba"<<endl;
                    }
                }
            }
            else if (n=="mamifero")
            {
                cin>>n;
                {
                    if (n=="onivoro")
                    {
                        cout<<"homem"<<endl;
                    }
                    else if (n=="herbivoro")
                    {
                        cout<<"vaca"<<endl;
                    }
                }
            }

        }
    }

    else if (n=="invertebrado")
    {
        cin>>n;
        {
            if (n=="inseto")
            {
                cin>>n;
                if (n=="hematofago")
                {
                    cout<<"pulga"<<endl;
                }
                else if (n=="herbivoro")
                {
                    cout<<"lagarta"<<endl;
                }
            }
            else if (n=="anelideo")
            {
                cin>>n;
                {
                    if (n=="hematofago")
                    {
                        cout<<"sanguessuga"<<endl;
                    }
                    else if (n=="onivoro")
                    {
                        cout<<"minhoca"<<endl;
                    }
                }
            }
        }
    }



    return 0;
}

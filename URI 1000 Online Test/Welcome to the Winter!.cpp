#include<iostream>
using namespace std;
int main()
{
    int a, b, c;


while(true){
    cin>>a>>b>>c;


    if (a > b && b <= c ){
        cout<<":)"<< endl;
    }
    else if (a < b && b >= c){
        cout<<":("<< endl;
    }
    else if (a < b && b < c){
            if ((b-a) > (c-b)){
                cout<<":("<< endl;
            }
            else if((b-a) <= (c-b)){
                cout<<":)"<< endl;
            }
    }
    else if (a > b && b > c){
        if ( (a - b) > ( b - c) ){
            cout<<":)"<< endl;
        }
        else if((a - b) <= ( b - c)){
            cout<<":("<< endl;
        }
    }
    else if( a == b ){
        if (b < c){
            cout<<":)"<< endl;
        }
        else if( b > c){
            cout<<":("<< endl;
        }
    }
}

    return 0;
}

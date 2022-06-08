#include<bits/stdc++.h>
using namespace std;
int main(){
    string myStr;
    int A = 0, E = 0, H = 0, M = 0, X = 0;
    int n;
    cin>>n;
    char str[n];

    for(int i = 0; i < n; i++){
        cin>>myStr>>str[i];
    }

    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            A++;
        }
        else if(str[i] == 'E'){
            E++;
        }
        else if(str[i] == 'H'){
            H++;
        }
        else if(str[i] == 'M'){
            M++;
        }
        else if(str[i] == 'X'){
            X++;
        }
    }
   /* cout<<"A : "<<A<<endl;
    cout<<"E : "<<E<<endl;
    cout<<"H : "<<H<<endl;
    cout<<"M : "<<M<<endl;
    cout<<"X : "<<X<<endl;*/

    cout<<X<<" Hobbit(s)"<<endl;
    cout<<H<<" Humano(s)"<<endl;
    cout<<E<<" Elfo(s)"<<endl;
    cout<<A<<" Anao(s)"<<endl;
    cout<<M<<" Mago(s)"<<endl;


    return 0;
}

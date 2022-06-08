#include<iostream>
#include <string>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string st;
    cin>>st;

    int countA = 0, countB, countAB;
    for(int i = 0; i < st.size(); i++){
        if(st[i] == 'A'){
            countA++;
        }
        else if(st[i] == 'B'){
            countB++;
        }
        else if(st[i] == 'AB'){
            countAB++;
            i++;
        }
    }

    if(countA == a) cout<<"Yes"<<endl;
    else if(countA == b) cout<<"Yes"<<endl;
    else if(countAB == c) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;

    return 0 ;
}

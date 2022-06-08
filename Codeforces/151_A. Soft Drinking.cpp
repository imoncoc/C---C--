#include<iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;


    int count = 0;

    count = ((k*l)/nl)/n;

    if( (c*d)/n < count ){
        count = (c*d)/n;
    }

    if( (p/np)/n < count  ){
        count = (p/np)/n;
    }

    cout<<count<<endl;




    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    long long int x = pow(a, b);
    long long int y = pow(b, a);

    cout<<x-y<<endl;





    return 0;
}


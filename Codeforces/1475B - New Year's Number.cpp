#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int n2020, n2021;
    n2021 = n % 2020;
    n2020 = ((n - n2021)/2020) - n2021;
    if(n2020 >= 0 && n2021 >= 0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }

    return 0;
}

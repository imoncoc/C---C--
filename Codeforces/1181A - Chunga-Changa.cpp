#include<bits/stdc++.h>
using namespace std;
int main(){
     long long x,y,z;
    cin>>x>>y>>z;
    long long total = (x+y)/z;
    long long another = (x/z) + (y/z);

    if(total>another){
            cout<<total<<" "<<min((z-(x%z)),(z-(y%z)));
    }
    else{
            cout<<total<<" "<<0;
    }
    return 0;



    return 0;
}

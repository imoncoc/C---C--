#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    vector<int> vec;

    for(long long i = 1; i <= n; i++){
        if(i % 2 == 1){
            vec.push_back(i);
        }
    }

    for(long long i = 1; i <= n; i++){
        if(i % 2 == 0){
            vec.push_back(i);
        }
    }

    cout<<vec[k-1]<<endl;



    return 0;
}

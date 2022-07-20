#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<int> vec;

    for(int i = 0; i < m; i++){
        int x;
            cin>>x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end(), greater<int>());
    int ans = INT_MAX;

    for(int i = 0; i <= m-n; i++){
            //cout<<"vec["<<i<<"]: "<<vec[i]<<" ";
            //cout<<"vec["<<(i+n)-1<<"]: "<<vec[(i+n) -1]<<endl;;
        //cout<<vec[i] - vec[ (i+n) - 1]<<endl;
        if(ans > vec[i] - vec[ (i+n) - 1]){
            ans = vec[i] - vec[ (i+n) - 1];
        }
    }

    cout<<ans<<endl;




    return 0;
}

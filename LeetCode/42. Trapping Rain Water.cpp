#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = height.size();
    vector<int> prefix(n), suffix(n);
    prefix[0] = height[0];

    for(int i = 1; i < n; i++){
        prefix[i] = max(prefix[i-1], height[i]);
    }

    reverse(height.begin(), height.end());
    suffix[0] = height[0];

    for(int i = 1; i < n; i++){
        suffix[i] = max(suffix[i-1], height[i]);
    }
    reverse(height.begin(), height.end());
    reverse(suffix.begin(), suffix.end());


    int waterTrapped = 0;

    for(int i = 0; i < n; i++){
        waterTrapped += min(prefix[i], suffix[i]) - height[i];
    }

    cout<<waterTrapped<<endl;





    return 0;
}

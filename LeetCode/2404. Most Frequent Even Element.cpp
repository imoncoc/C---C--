#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector<int> nums = {0,1,2,2,4,4,1};
    //vector<int> nums = {4,4,4,9,2,4};
    //vector<int> nums = {29,47,21,41,13,37,25,7};
    vector<int> nums = {0,1,2,0,0,0,2,4,4,1};
    int n = nums.size();
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        if(nums[i] % 2 == 0 ){
            mp[nums[i]]++;
        }
    }

    int ans = -1;
    int temp = -1;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
             if(temp < itr->second){
                    temp = itr->second;
                ans = itr->first;
                //cout<<"it: "<<itr->second<<endl;
             }

    }
    cout << endl;

    cout<<"ans: "<<ans<<endl;







    return 0;
}

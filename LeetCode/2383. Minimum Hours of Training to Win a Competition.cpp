#include<bits/stdc++.h>
using namespace std;
int main(){
    int initialEnergy = 5, initialExperience = 3;
    vector<int> energy = {1,4,3,2}, experience = {2,6,3,1};
    //vector<int> energy = {1}, experience = {3};
    //int initialEnergy = 1, initialExperience = 1;
    //vector<int> energy = {1, 1, 1, 1}, experience = {1, 1, 1, 50};

    int sum = 0, ans = 0;
    int n = energy.size();
    int m = experience.size();

    for(int i = 0; i < n; i++){
        sum += energy[i];
    }

    if(sum >= initialEnergy){
        ans = (sum - initialEnergy) + 1;
    }
    cout<<"ans: "<<ans<<endl;

    for(int i = 0; i < m; i++){
        int exp = experience[i];
        if(exp >= initialExperience){
            int diff = (exp - initialExperience) + 1;
            initialExperience += diff;
            ans += diff;
        }
        initialExperience += exp;
    }


    cout<<"ans: "<<ans<<endl;


    return 0;
}

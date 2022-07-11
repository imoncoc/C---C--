#include<bits/stdc++.h>
using namespace std;
int main(){

        string str;
    cin>>str;
    unordered_map<char, int> M;
    int time = 0;

     for (int i = 0; str[i]; i++)
    {
        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
            //cout<<"map Size: "<<M.size()<<endl;
            if(M.size() == 4){
                time++;
                M.clear();
            }
        }

        // Else update the frequency
        else
        {
            M[str[i]]++;
        }
    }

    int count = 0, day = 0;

     for (auto& it : M) {
        cout << it.first << ' ' << it.second << '\n';
        count++;
    }

    day = count / 3;
    if(count % 3 == 0){
        cout<<day<<endl;
    }
    else{
        cout<<day+1<<endl;
    }







    return 0;
}

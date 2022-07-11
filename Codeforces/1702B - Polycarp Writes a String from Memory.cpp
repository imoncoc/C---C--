#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
    cin>>str;

    set<char> mySet;
     set<char>::iterator it;
     int days = 1;

    for(int i = 0; i < str.size(); i++){
            mySet.insert(str[i]);

            if(mySet.size() > 3){
                days++;
                mySet.clear();
                mySet.insert(str[i]);
            }


    }


/*
    for (it=mySet.begin(); it!=mySet.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
  */


  cout<<days<<endl;
    }



    return 0;
}

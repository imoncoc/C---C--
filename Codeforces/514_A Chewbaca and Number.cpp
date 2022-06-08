#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<int> numbers;
    while(n>0) {
        int x=n%10;
        if(x>=5) {
            x=9-x;
        }
        numbers.push_back(x);
        n=n/10;
    }
    int s=numbers.size();
    if(numbers[s-1]==0) {
        numbers[s-1]=9;
    }
    for(int i=s-1;i>-1;i--) {
        // if(numbers[i]!=-1)
        cout<<numbers.at(i);
    }
    return 0;
}

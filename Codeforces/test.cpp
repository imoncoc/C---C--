#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    string str[n];
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cout<<str[j+i][k]<<" ";
            }
        }
    }

    return 0;
}

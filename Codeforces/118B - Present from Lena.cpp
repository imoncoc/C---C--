#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row = -n; row <= n; row++){
    // -3 -2 -1 0 1 2 3
    // 6   4  2 0 2 4 6 -> Space
    // 0   1  2 3 2 1 0 -> num
    int space = 2 *abs(row);
    for(int i = 0; i <space; i++){
        cout<<" ";
    }
    int maxi = n - abs(row);

    for(int i = 0; i < maxi; i++) cout<<i<<" ";
    for(int i = maxi; i > 0; i--) cout<<i<<" ";

    cout<<0<<endl;
    }







    return 0;
}

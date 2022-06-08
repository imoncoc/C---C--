#include<iostream>
using namespace std;
int main()
{
    int n,a[100], s,m;
    cin>>m;
    for (int j = 0; j < m; j++){
    cin>>n;

       s = 0;
    for (int i = 0; i < n; i++){
            if (i % 2 == 1){
               s++;
            }
            else{
                s--;
            }

}

  cout<<abs(s)<<endl;
    }
    return 0;
}

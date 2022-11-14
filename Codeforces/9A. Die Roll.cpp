#include<bits/stdc++.h>
using namespace std;
int main(){
    int y, w;
    cin>>y>>w;

    string probability[7] = { "", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6" };
    int d = max(y, w);

    cout<<probability[d]<<endl;





    return 0;
}

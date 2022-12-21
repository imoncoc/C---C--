#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    vector<int> v(4);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    v[3] = d;
    sort(v.begin(), v.end());
    if(a == v[0])
    {
      if(c < d && b < d)
      {
         cout << "Yes"<<endl;
      }
      else cout << "No"<<endl;
    }
    else if(b == v[0])
    {
     if(d < c && a < c)
      {
         cout<<"Yes"<<endl;
      }
      else cout<<"No"<<endl;
    }
    else if(c == v[0])
    {
     if(a < b && d < b)
      {
         cout<<"Yes"<<endl;
      }
      else cout<<"No"<<endl;
    }
    else if(d == v[0])
    {
     if(c < a && b < a)
      {
         cout<<"Yes"<<endl;
      }
      else cout<<"No"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

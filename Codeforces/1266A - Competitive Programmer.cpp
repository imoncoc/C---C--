#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){

    int t,n,m,x,y,i,j,r,l;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int k=0,z=0,b=0;
        for(i=0;i<a.size();i++)
        {
            k=k+((int)a[i]-48);
            if(a[i]=='0')z++;
            if(a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8')b++;
        }
        if(k==0)
        {
            cout<<"red"<<endl;continue;
        }
        if(b==0&&k%3==0&&z>1)
        {
                cout<<"red"<<endl;continue;
        }
        if(z>=1&&k%3==0&&b>0)
        {
            cout<<"red"<<endl;continue;
        }
        cout<<"cyan"<<endl;continue;
    }
return 0;
}

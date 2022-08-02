#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt=0,i,j,k,tc,t;
    int ara[200005];
    cin>>tc;
    while(tc--)
    {
        int flag=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            ara[i]+=(ara[i]%10);
            if(ara[i]%10==0)flag=1;
        }
        if(flag==1)
        {
            flag=0;
            for(i=1;i<n;i++)
            {
                if(ara[i]!=ara[i-1])flag=1;
            }
            if(flag)cout<<"no"<<endl;
            else cout<<"yes\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            while(ara[i]%10!=2)ara[i]+=ara[i]%10;
            ara[i]%=20;
        }
        int flg1=0,flg2=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]==2)flg1=1;
            else if(ara[i]==12)flg2=1;
        }
        if(flg1&& flg2)cout<<"NO\n";
        else cout<<"YES\n";



    }

    return 0;
}

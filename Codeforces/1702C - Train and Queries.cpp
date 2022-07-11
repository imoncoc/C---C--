#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,k;
       cin>>n>>k;
       ll ar[n+6];

	map<int, int> m1, m2;

	for(int i=0;i<n;i++)
	{
		cin >> ar[i];
		if (m1[ar[i]] == 0)
		m1[ar[i]] = i + 1;

		m2[ar[i]] = i + 1;
	}

   for(auto it:m1)cout<<it.first<<" "<<it.second<<endl;
   cout<<endl;
 for(auto it:m2)cout<<it.first<<" "<<it.second<<endl;
 while(k--)
 {
     int a,b;cin>>a>>b;
     if(m1[a]==0 or m1[b]==0)cout<<"NO"<<endl;
     else{
         int x=m1[a];
         int y=m2[b];
         if(x<y)cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
 }
 }
}

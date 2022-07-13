#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>va,vp;
		int k=0;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x<i)
			{
				k++;
				va.push_back(x);
				vp.push_back(i);
			}
		}



		long long ans=0;
		for(int i=k-1;i>=0;i--)
		{
			vector<int>::iterator it=lower_bound(vp.begin(),vp.end(),va[i]);
			ans+=it-vp.begin();
		}
		cout<<ans<<endl;
	}
	return 0;
}

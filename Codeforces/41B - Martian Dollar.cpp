#include<iostream>
using namespace std;
int ans;
int main()
{

	int n,k,a[2002]={},test=0,ans=0;

	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>a[i];

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			ans=max(ans,k/a[i]*a[j]+k%a[i]);
		}
	}

	cout<<max(ans,k)<<endl;
	return 0;
}

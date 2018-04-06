#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,m,a[60],ans=10000000000;
	cin>>n;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	sort(a,a+m);
	for(int i=0;i<m-n+1;i++)
	{
		ans=min(ans,a[i+n-1]-a[i]);
	}
	cout<<ans;
}
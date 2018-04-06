#include<iostream>
using namespace std;
int main()
{
	int n,p,a[105]={0},temp;
	cin>>n;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>temp;
		a[temp]=1;
	}

	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>temp;
		a[temp]=1;
	}
	temp=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			temp=0;
			break;
		}
	}
	if(temp==1)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
}
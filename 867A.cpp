#include<iostream>
using namespace std;
int main()
{
	int n,sf=0,fs=0,flag=0;
	//1S
	//2F
	char c;
	cin>>n;
	getchar();
	c=getchar();
	n--;
	
	//cout<<c;
	if(flag==0)
	{
		if(c=='S')
			flag=1;
		else
			flag=2;
	}
	while(n--)
	{
		c=getchar();
		if(flag==1 && c=='F')
		{
			flag=2;
			sf++;
		}
		else if(flag==2 && c=='S')
		{
			flag=1;
			fs++;
		}
	}
	if(sf>fs)
		printf("YES");
	else
		printf("NO");
}
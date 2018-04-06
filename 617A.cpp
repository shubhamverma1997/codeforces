#include<iostream>
using namespace std;
int main()
{
	long long int x,cnt=0,num=5;
	cin>>x;
	while(x!=0 || num!=0)
	{
		cnt=cnt+x/num;
		x=x%num;
		num--;
	}
	cout<<cnt;
}
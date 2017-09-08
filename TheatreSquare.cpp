#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,m,a,temp,temp2;
	double ans;
	scanf("%lld",&n);
	scanf("%lld",&m);
	scanf("%lld",&a);
	ans=double(n)/a;
	temp=ceil(ans);
	ans=double(m)/a;
	temp2=ceil(ans);
	temp=temp*temp2;
	printf("%lld",temp);

}
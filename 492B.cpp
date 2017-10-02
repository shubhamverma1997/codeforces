#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{

	long long int arr[1005],n,l;
	double md=-1,d;
	cin>>n;
	cin>>l;
	for(register long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	/*
	for(register long long int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";*/
	for(register long long int i=0;i<n-1;i++)
	{
		d=(arr[i+1]-arr[i])/2.0;
		if(d>md)
			md=d;
		//cout<<md<<" ";
	}
	//cout<<"\n";
	if(arr[0]-0>md)
		md=arr[0];
	if(l-arr[n-1]>md)
		md=l-arr[n-1];
	cout<<setprecision(10)<<fixed;
	cout<<md;

}
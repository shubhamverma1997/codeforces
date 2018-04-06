#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<char> s;
	char a[100005];
	cin>>a;
	for(register long long int i=0;a[i]!='\0';i++)
	{
		if(s.size()!=0)
		{
			if(s.top()==a[i])
				s.pop();
			else
				s.push(a[i]);
		}
		else
			s.push(a[i]);
	}
	if(s.size()==0)
		printf("Yes");
	else
		printf("No");
}
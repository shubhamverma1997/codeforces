#include <iostream>
using namespace std;
int main()
{
	int cnt=0,flag=1;
	char c,prev;
	c=getchar();
	prev=c;
	while(c!='\n')
	{
		if(prev==c)
			cnt++;
		else
			cnt=1;
		if(cnt>=7)
			flag=0;
		prev=c;
		c=getchar();
	}
	if(flag==0)
		printf("YES");
	else
		printf("NO\n");
}
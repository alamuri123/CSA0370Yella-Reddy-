#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	c=a+b;
	printf("enter the n value");
	scanf("%d",&n);
	printf("fibonacci series %d\n%d\n",a,b);
	for(i=2;i<n;i++)
	{
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
	}
	
}

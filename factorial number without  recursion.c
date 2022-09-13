#include<stdio.h>
int main()
{
	int n,fact=1,i=0;
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}

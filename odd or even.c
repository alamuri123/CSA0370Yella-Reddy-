#include<stdio.h>
int main()
{
	int n,a[10],i;
	printf("enter the n number");
	scanf("%d",&n);
	printf("enter the elements an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" even numbers are=");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	printf(" odd numbers are=");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\n",a[i]);
		}
	}
	
}

#include<stdio.h>
int main()
{
    int a[10],n,i,l,h,key,mid,flag=0;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the key");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<h)
    {
        mid=(l+h)/2;
        if(a[mid]==key)
            flag=1;
        else if(a[mid]>key)
            for(i=0;i<mid-1;i++)
                if(a[i]==key)
                    flag=1;
        else if(a[mid]<key)
            for(i=mid+1;i<n;i++)
                if(a[i]==key)
                    flag=1;
                    break;
    }
    if(flag==1)
    {
        printf("element found");
    }
    else
        printf("not found");
}

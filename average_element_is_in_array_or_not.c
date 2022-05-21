#include<stdio.h>
int main()
{
    int n,a[50],avg,sum=0,flag=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
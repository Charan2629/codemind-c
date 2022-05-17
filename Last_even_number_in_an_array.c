#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
        {
            temp=a[i];
            break;
        }
    }
    printf("%d",temp);
}
#include<stdio.h>
int main()
{
    int n,a[50],min=a[0],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}
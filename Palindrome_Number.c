#include<stdio.h>
int main()
{
    int t,i,r,sum,x[10],n,rem;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    scanf("%d",&x[i]);
    for(i=0;i<t;i++)
    {
        sum=0;
        r=n=x[i];
        while(n>0)
        {
            rem=n%10;
            sum=sum*10+rem;
            n/=10;
        }
        if(sum==r)
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}
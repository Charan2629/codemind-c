#include<stdio.h>
int weight_check(int *weights,int n,int t)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(weights[i]<=t)
        {
            c+=1;
        }
        else
        {
            c+=2;
        }
    }
    return c;
}
int main()
{
    int n,weights[10],i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&weights[i]);
    }
    scanf("%d",&t);
    printf("%d",weight_check(weights,n,t));
}
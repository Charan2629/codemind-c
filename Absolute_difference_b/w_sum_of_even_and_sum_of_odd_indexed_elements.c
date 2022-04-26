#include<stdio.h>
int main()
{
    int n,a[100],i,sume=0,sumo=0,sub;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sume+=a[i];
        }
        if(i%2!=0)
        {
            sumo+=a[i];
        }
        sub=sume-sumo;
        if(sub<0)
        {
            sub=-1*sub;
        }
    }
    printf("%d",sub);
}
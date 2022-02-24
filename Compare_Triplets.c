#include<stdio.h>
int main()
{
    int a[3],b[3],p=0,q=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
           p++;
        else if(a[i]<b[i])
           q++;
    }
    printf("%d %d",p,q);
    return 0;
}
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c,count=0,i,j,kills;
	for (i=1; i>0; i++)
	{
		kills=a+b+i;
		count=0;
		for (j=1; j<=kills; j++)
		{
			if (kills%j==0)
			{
				count+=1;
			}
		}
		if (count<=2)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
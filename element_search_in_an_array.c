#include<stdio.h>
int bs(int *arr,int i,int j,int se)
{
	int m;
	if(i>j)
	{
		return 0;
	}
	m=(i+j)/2;
	if(arr[m]==se)
	{
		return 1;
	}
    if(arr[m]>se)
	{
		j=m-1;
	}
	else
	{
		i=m+1;
	}
	return bs(arr,i,j,se);
}
int main()
{
	int arr[50],i,j,n,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	
    if(bs(arr,0,n-1,se))
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
}
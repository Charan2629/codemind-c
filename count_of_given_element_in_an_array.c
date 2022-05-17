#include <stdio.h>

int main()
{
	int Size, i, num, occr = 0;

	scanf("%d", &Size);

	int arr[Size];
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &num);

	for (i = 0; i < Size; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}

	printf("%d",occr);
}
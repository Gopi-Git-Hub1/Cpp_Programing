#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr1;
	ptr1 = (int *)malloc(sizeof(int)*5);
	for(int i = 0; i<5; i++)
	{
		ptr1[i] = i;
	}
	for(int v=0; v<5; v++)
	{
		printf("%d ",ptr1[v]);
	}
	printf("\n");
	int *ptr2;
	ptr2 = (int *)calloc(10, sizeof(int));
	for(int i = 0; i<10; i++)
	{
		ptr2[i] = i;
	}
	for(int v=0; v<10; v++)
	{
		printf("%d ",ptr2[v]);
	}
	printf("\n");
	free(ptr2);
	ptr1 = (int *)realloc(ptr1, 15*sizeof(int));
	for(int i = 0; i<15; i++)
	{
		ptr1[i] = i;
	}
	for(int v=0; v<15; v++)
	{
		printf("%d ",ptr1[v]);
	}
	printf("\n");
	free(ptr1);

	return 0;
}

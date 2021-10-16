#include<stdio.h>
void swap(int *x,int *y)
{
	int z=*x;
	*x=*y;
	*y=z;
}
int main()
{
	int n;
	printf("size\n");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("enter the data\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		swap(&a[i],&a[i+1]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

#include<stdio.h>
void swap(int *x,int *y)
{
	int z=*x;
	*x=*y;
	*y=z;
}
int main()
{
	int n,i,j;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the data of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		swap(&a[i],&a[j]);
	}
	printf("reverse array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

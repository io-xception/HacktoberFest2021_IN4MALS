#include<stdio.h>
void maxmin(int arr[],int n)
{
	int i;
	int max,min;
	max=min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	printf("max data %d\n",max);
	printf("min data %d\n",min);
}
int main()
{
	int n,i,j;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the data of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	maxmin(arr,n);
}

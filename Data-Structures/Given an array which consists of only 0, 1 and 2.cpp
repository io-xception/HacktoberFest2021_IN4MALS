#include<stdio.h>
int main()
{
	int n,z;
	printf("size\n");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("enter the data\n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	for(i=0;i<n;++i)
	{
		if(a[i]>a[i+1])
		z=a[i];
		a[i]=a[i++];
		a[i++]=z;
	}
	printf("\n");
	for(i=0;i<n;++i)
		printf("%d ",a[i]);
}

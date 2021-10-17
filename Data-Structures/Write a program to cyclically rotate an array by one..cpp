#include <stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5}, i;
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Given array is\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	int x = arr[n-1];
	for (i = n-1; i > 0; --i)
	arr[i] = arr[i-1];
	arr[0] = x;
	printf("\nRotated array is\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

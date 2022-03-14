#include <stdio.h>

int linearSearch(int arr[], int n)
{
	int i;
	printf("Enter the value: ");
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		if (arr[i] == n)
			return i;
	}

	return -1;
}

int main()
{
	int arr[] = { 1, 10, 60, 3, 0, 181, 5, 20, 400 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Fixed Point is %d", linearSearch(arr, n));
	return 0;
}
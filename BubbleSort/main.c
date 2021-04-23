#include <stdio.h>

void bubble_sort(int arr[], int size)
{
	int i, j, temp;
	
	for(i = 0; i < (size - 1); i++)
	{
		for(j = 0; j < (size - i - 1); j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}



int main()
{
	int arr[10] = {7,3,4,2,5,6,1,8};
	
	printf("\nFirst : ");
	int i;
	for(i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	bubble_sort(arr, 10);
	printf("\nAfter Bubble Sort : ");
	for(i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	printf("\n");
}


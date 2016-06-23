/*折半查找*/
#include <stdio.h>
int binarySearch(int array[], int low, int high, int target)
{
	while(low <= high)
	{
		int mid = (low + high) / 2;
		if(array[mid] > target)
			high = mid - 1;
		else if(array[mid] < target)
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
void main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int a = binarySearch(array, 0, 7, 6);
	printf("%d\n", a);
}

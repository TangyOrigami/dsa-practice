#include <stdio.h>

int binarySearch(int array[], int target);

void main()
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
	int ret, target;

	target = 1;

	ret = binarySearch(array, target);

	printf("Result: %d\n", ret);
}


int binarySearch(int array[], int target) 
{
	int hi, low, mid, i;

	int size = 9;

	printf("%d\n", size);

	low = array[0];
	mid = array[size/2];
	hi = array[size];

	for ( i = 0; i != size; i++) {
		if (target == low) return low, i;
		else if (target == mid) return mid, i;
		else if (target == hi) return hi, i;
	}

	printf("low: %d, mid: %d, hi: %d\n", low, mid, hi);

	return size;
}

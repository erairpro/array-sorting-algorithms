#include <stdio.h>
#define MAX_LEN 100

static void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

static void bubble_sort(int *array, int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
		for(j = 0; j < len - 1; j++)
			if(array[j] > array[j+1])
				swap(&array[j], &array[j+1]);
}

static void print_array(int *array, int len)
{
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main()
{
	return 0;
}

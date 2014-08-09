#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,0};
	const int len = sizeof(a)/sizeof(a[0]);
	int i = len;
	int compare(const void *a, const void *b)
	{
		//printf("a:%d, b:%d\b", *(int *)a, *(int *)b);
		return (*(int *)b - *(int *)a);
	}
	qsort(a, sizeof(a)/sizeof(a[0]), sizeof(a[0]), compare);
	while(i--)
	{
		printf("%d:%d\n", i, a[i]);
	}
	return 0;
}

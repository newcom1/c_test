#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int size)
{
	int val = a[0];
	int i = 0;
	int j = size - 1;
	if(size <= 1) return;
#if 1
	while(i < j)
	{
		while(i < j)
		{
			if(a[j] < val)	
			{
				a[i] = a[j];
				break;
			}
			j--;
		}

		while(i < j)
		{
			if(a[i] > val)	
			{
				a[j] = a[i];
				break;
			}
			i++;
		}
	}
#endif
#if 0
	while(i<j)/*循环结束条件*/
	{
		/*从后向前搜索比val小的元素，找到后填到a[i]中并跳出循环*/
		for(;j>i;j--)
			if(a[j]<val)
			{
				a[i]=a[j];
				break;
			}
		/*从前往后搜索比val大的元素，找到后填到a[j]中并跳出循环*/
		for(;i<j;i++)
			if(a[i]>val)
			{
				a[j]=a[i];
				break;
			}
	}
#endif

	a[i] = val;
	quicksort(a, i);
	quicksort(a+i+1, size-i-1);
}


int main()
{
	int data[] = { 9,2,7,6,1,4,3,8,5};
	const int len = sizeof(data)/sizeof(data[0]);
	int i = len;
	while(i--)	printf("%d:%d\n", i, data[i]);
	quicksort(data, len);
	printf("------------------------------------------\n");
	i = len;
	while(i--)	printf("%d:%d\n", i, data[i]);
}

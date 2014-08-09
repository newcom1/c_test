//quick.cp
#include <iostream>
#include <stdlib.h>
using namespace std;

//这是递归调用函数中交换函数
void swap(int *l, int *h)
{
	int temp;
	temp = *l;
	*l = *h;
	*h = temp;
}

//这是一次排序，完成一次排序任务，并且返回mid的值。
int partion(int A[], int l, int h) //A为数组，l为待排序区间的左值（low），h相同（high）
{
	int* low = &A[l];
	int* high = &A[h];
	int* m = &A[l];
	while(l<h)
	{
		while((l<h)&& *m <= *high)
		{
			h--;
			high--;
		}
		if(l == h)
			break;
		swap(m, high);
		m = high;
		l++;
		low++;
		while((l<h) && *m > *low)
		{
			l++;
			low++;
		}
		swap(m, low);
		m = low;
		h--;
		high--;
	}
	swap(m, low);
	int n = l;
	return n;
}

//这是调用函数，可以理解为发动递归调用，而quick是被调用的排序函数
void quick(int A[],int l,int h)
{
	if(l < h)
	{
		int mid = partion(A, l, h);
		quick(A, l, mid-1);
		quick(A, mid + 1, h);
	}
}

int main()
{
	int team[10];
	for(int i=0; i < 10; i++)
	{
		team[i] = rand()%(10);
		//产生随机数
		cout << team[i] << "  ";
	}
	cout << endl;
	quick(team, 0, 9);
	for(int i = 0; i < 10; i++)
		cout << team[i] << "  ";
	return 0;
}

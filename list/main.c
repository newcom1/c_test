#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print(void *data){
	printf("destroy:%d\n", *(int *)data);
	return ;
}
int main()
{
	int *value;
	int data[] = {9,1,2,3,4,5,6};

	List frame;
	List *p = &frame;

	list_init(&frame, print);
	list_ins_next(&frame, NULL, &data[3]);

	list_rem_next(p, NULL, (void **)&value);
	frame.destroy(value);
	return 0;
}



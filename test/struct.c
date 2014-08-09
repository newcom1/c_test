#include <stdio.h>

struct test
{
	char a;
	char b[5];
	int c;
};

void main()
{
	struct test t1;
	struct test *p;
	p = &t1;

	printf("sizeof(p->b):%d\n", sizeof(p->b));
	return ;
}

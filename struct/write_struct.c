#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 5
#define FNAME "./file.txt"

struct book
{
	char name[2];
	int price;
	char build[5];
};
struct book *p;

void dis()
{
	int i;
	for(i = 0; i < NUM; i++)
	{
		printf("book%d\nname:%s\nprice:%d\nbuild:%s\n\n", i, (p+i)->name, (p+i)->price, (p+i)->build);
	}
}
int main()
{
	int i;
	FILE *fp;

	p = (struct book *) malloc( sizeof(struct book) * NUM );
	memset(p, '\0', sizeof(struct book)*NUM);

	for(i = 0; i < NUM; i++)
	{
		sprintf((p+i)->name, "%d", i);
		(p+i)->price = i;
		memcpy((p+i)->build, "build", sizeof(p->build));
	}

	if( (fp = fopen(FNAME, "a+b")) == NULL )
	{
		fputs("Can't open file\n", stderr);
		exit(1);
	}

	for(i = 0; i < NUM; i++)
	{
		fwrite((p+i), 1, sizeof(struct book), fp);
	}
	dis();
	
	return 0;
}

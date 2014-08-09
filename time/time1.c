#include <stdio.h>
#include <time.h>
void main()
{
	char bcd[10];
	time_t time;
	time(&time);
	printf("BCD:%s\n", ctime(&time));
	return ;
}

#include <stdio.h>
#include <stdlib.h>

void set_set(char *text )
{
	*(text+1) = 's';
	return ;
}

void set(char (*text)[128])
{
	strcpy((*(text+1)), "af");
	strcpy((*(text+0)), "af");
	set_set( *(text+3) );
	return;
}

void main()
{
	char array[4][128] = {{"a"}, {"b"}, {"c"}, {"d"}};

	set(array);
	printf("array[0]:%s\n", array[0]);
	printf("array[1]:%s\n", array[1]);
	printf("array[2]:%s\n", array[2]);
	printf("array[3]:%s\n", array[3]);
	return ;
}

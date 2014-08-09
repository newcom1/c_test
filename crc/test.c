#include <stdio.h>
#include <string.h>
void main ()
{
	char test[]="你好青奥会，一二三四五六七八九十,1234567890,abcdefjhigklmnopqrstuvwxyz,ABCDEFJHIGKLMNOPQRSTUVWXYZ";
	printf("sizeof(buf):%d\n", sizeof(test));
	printf("strlen(buf):%d\n", strlen(test));
	int i;
	for(i = 0; i < strlen(test); i++)
	{
		printf("%x ", test[i]);
	}
	return ;
}

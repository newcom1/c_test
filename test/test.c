#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * reverse(char *const dest, const char *src)
{
	if(dest == NULL || src == NULL)	return NULL;
	char *p = dest;
	const int len = strlen(src);
	int i = len;
	while(i--)
	{
		*(p + len - i - 1) = *(src + i);
	}

	return dest;
}

void caculate(void){
	int num = 0;
	char test = 0x31;
	printf("test:%02x\n", test);
	while(test &= (test-1))
	{
		num++;
	}
	//test &= (test-1);
	//test -= 1;
	printf("num:%d\n", num);
	return ;
}

int main(){
	char *str = "this is test!";
	char str1[] = "this is test!";
	printf("sizeof(str):%d\n", sizeof(str));
	printf("sizeof(str1):%d\n", sizeof(str1));
	str = str1;
	printf("sizeof(str):%d\n", sizeof(str));
	return 0;
}




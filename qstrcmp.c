#include <stdio.h>
#include <string.h>

int charncmp(char *a, char *b, int num)
{
	int i;
	for(i=0; i<num; i++)
	{
		if(a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char a[4] = {0x00, 0x00, 0x00, 0x01};
	char b[4] = {0x00, 0x00, 0x00, 0x02};
	int num = charncmp(a, b, 4);
	//printf("num:%d\n", num);
	
	char data[10];
	char str[]="love";
	sprintf(data, "%s",str);
	printf("data:%s\n", data);

	return 0;
}

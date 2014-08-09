#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	char data[] =
		"D2BCD2BCD2BCD2BCD2BCD2BCD2BCD2BCD2BCD2BCD2BCD2BCB7A1B7A1B7A1B7A1B7A1B7A1B7A1B7A1B7A1B7A1B7A1B7A1C8FEC8FEC8FEC8FEC8FEC8FEC8FEC8FEC8FEC8FEC8FEC8FECBC1CBC1CBC1CBC1CBC1CBC1CBC1CBC1CBC1CBC1CBC1CBC1CEE9CEE9CEE9CEE9CEE9CEE9CEE9CEE9CEE9CEE9CEE9CEE9";
	int len = strlen(data);
	int i;
	for(i = 0; i < len; i++)
	{
		if(i%2 == 0)
			printf(" ,0x");
		printf("%c", data[i]);
	}
	printf("\n");
	printf("len = %d\n", len/2);
	return 0;

}

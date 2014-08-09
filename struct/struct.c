#include <stdio.h>
#include <string.h>
struct s1
{
	int a;
	char b;
};

struct s2
{
	int c;
	struct s1 d;
};

int main()
{
	struct s2 g_data = 
	{
		1, {2, '3'}
	};
	char data[100] = {0};
	memcpy(data, (char *)&g_data, sizeof(g_data));
	int i;
	for(i = 0; i < sizeof(g_data) ; i++)
	{
		printf("data:%02x\n", data[i]);
	}
	return 0;
}

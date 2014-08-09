#include <stdio.h>
#include <string.h>

#pragma pack(1)
struct test
{
	char a;
	int b;
};
#pragma pack()

int main()
{
	int len = sizeof(struct test);
	char data[5];
	memcpy(data, "abc\n", 4);
	//printf("data:%s\n", data);
	FILE *fp;
	fp = fopen("./reports.txt", "r");

	fgets(data, 5, fp);
	printf("data:%s", data);
	fgets(data, 5, fp);
	printf("data:%s\n", data);
	fclose(fp);
	

	return 0;
}

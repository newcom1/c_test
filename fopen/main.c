#include <stdio.h>
#include <stdlib.h>
#define CONFIG_FILE "binary.txt"
#define LINE_LEN 100

int main()
{
	FILE *fp;
	char content[LINE_LEN];
	int nBufflen = 0;
	fp = fopen(CONFIG_FILE, "r");
	if(!fp)
	{
		printf("Failed to open file!\n");
		return 0;
	}
	while(!feof(fp))
	{
		if(0)
		{
			nBufflen = fread(content, sizeof(char), 1, fp);
			printf("content:%s\nnBufflen:%d\n", content, nBufflen);
		}
		else
		{
			nBufflen = fread(content, sizeof(char), LINE_LEN, fp);
			printf("content:%s\nnBufflen:%d\n", content, nBufflen);
		}
	}


	return 0;
}

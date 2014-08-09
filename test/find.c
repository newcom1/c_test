#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *maxf(char *a, char *b)
{
	int a_len = strlen(a);
	int b_len = strlen(b);
	int counter = 0;
	int i = 0;
	while(i < a_len)
	{
		int j = 0;
		while(j < b_len){
			if(*(a+i+counter) == *(b+j)){
				counter++;
			} else {
				if(counter > 1) {
					memset(b, 0, b_len);
					memcpy(b, a+i, counter);
					return b;
				}
				counter = 0;
			}
			j++;
		}


		i++;
	}
	printf("a_len=%d,b_len=%d,i=%d,j=%d\n", a_len,b_len,i,j);
	return NULL;

}

int main()
{
	char str1[] = "abcdefggh";
	char str2[] = "lablggsd";
	char *p;
	p = maxf(str1, str2);
	printf("p=%s\n", p);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char s[])
{
	//字符串反转

	int c, i=0, j;
	for(j=strlen(s)-1;i<j;j--)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
		i++;
	}
}
void IntegerToString(char s[],int n)
{
	int i=0,sign;
	if((sign=n)<0)//如果是负数，先转成正数 
		n=-n;

	do //从个位开始变成字符,直到最高位,最后应该反转
	{
		s[i++]=n%10+'0';
	}
	while((n=n/10)>0);
	
	//如果是负数，补上负号
	if(sign<0)
		s[i++]='-';
	s[i]='\0';//字符串结束

	reverse(s);
}
int checkcpu()
{
	union test
	{
		int a;
		char b;
	}date;
	date.a = 1;
	return (date.b == 1);
}
void main()
{
	char b = 1 + '0';
	int m;
	char c[100];
	m =215;
	IntegerToString(c,m);
	printf("integer = %d string = %s\n", m, c);
	printf("b = %c\n", b);

	printf("key=%d\n", checkcpu());
	return ;
}

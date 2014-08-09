#include <stdio.h>
#include <string.h>
int main()
{
	int flag = 0;
	char line[100]={0},tmp[50]={0},name[50]={0},pass[20]={0};
	FILE *fp=fopen("data.txt","w+");  //打开源文件读
	FILE *fpm=fopen("data.tmp","w"); //打开临时文件写
	printf("please input name:");
	gets(tmp);                      //获得要修改的用户名
	printf("please input mod password:");
	gets(pass);                        //获得修改后的密码
	while (fgets(line,sizeof(tmp),fp))  //循环读文件
	{

		sscanf(line,"%s %*s",name);    //解析一行内容 将第一个字符串赋值给name
		printf("name:%s\n", name);
		if (strcmp(tmp,name) ==0)       //如果要修改用户名和解析出用户名一致
		{ 
			printf("here!\n");            //重新组合这行数据
			strcpy(line,name);            //把name复制到line里
			strcat(line," ");             //给line加上空格
			strcat(line,pass);            //给line接上密码
			strcat(line,"\n");            //给line接上换行符
			fputs(line,fpm);              //将line写入临时文件
			flag = 1;
		}else
		{
			fputs(line,fpm);              //如果本行的name与获得的要修改用户名不同则直接将这行写入临时文件
		}
	}
	if (flag = 0)
	{
			strcpy(line,name);            //把name复制到line里
			strcat(line," ");             //给line加上空格
			strcat(line,pass);            //给line接上密码
			strcat(line,"\n");            //给line接上换行符
			fputs(line,fpm);              //将line写入临时文件
	}

	fclose(fp);                 //关闭源文件文件指针
	fclose(fpm);                //关闭临时文件指针
	remove("data.txt");     //删除源文件
	rename("data.tmp","data.txt");  //将临时文件改名为源文件
	return 0;
}


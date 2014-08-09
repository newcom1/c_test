#include <stdio.h>
#include <stdlib.h>

int main()
{
	int status;
	pid_t pid;

	if((pid = fork()) < 0)
		printf("fork error!\n");
	else if(pid == 0)
		exit(2);
	

	if(pid == wait(&status))
		printf("pid=%d, status=%d\n", pid, status);

	return 0;
}

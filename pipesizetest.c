#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int pipefd[2];
	char buf[4096] = {0};
	close(pipefd[0]);
	pipe(pipefd);
	int i;
	for(i = 0; i<sizeof(buf); ++i)
		{
			buf[i] = 'a';
		}
	int j;
	for(j = 1; ; ++j)
		{
			write(pipefd[1],buf,sizeof(buf));
			printf("%d\n",j);
		}
	close(pipefd[1]);
	return 0;
}

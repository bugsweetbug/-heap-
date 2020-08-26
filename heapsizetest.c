#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	for(; ; ++i)
		{
			int *p = (int *)malloc(1024*1024);
			if(p != NULL)
				{
					printf("%d\n",i);
				}
			else
				{
					break;
				}
		}
	return 0;
}

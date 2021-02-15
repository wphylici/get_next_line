#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	char *line;
	int fd;
	int j;

	j = 0;
	fd = 0;
	while((j = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
		//free(line);
	}
	printf("%s\n", line);
	printf("%d\n", j);
	//free(line);
	return(0);
}
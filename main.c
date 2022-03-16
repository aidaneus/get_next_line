#include <stdio.h>
#include <fcntl.h>
#include "srcs/get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;
	int		ret;

	i = 0;
	(void)argc;
	fd = open((argv[1]), O_RDONLY);
	while (get_next_line(fd, &line) == 1)
		printf("%s\n", line);
    printf("%s\n", line);
}
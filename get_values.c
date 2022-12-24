#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

void get_values(FILE *file)
{
	char *buff;
	size_t buff_size;
	int num;

	buff = NULL;
	buff_size = 3;
	num = 0;
	while (getline(&buff, &buff_size, file) != -1)
	{
		num = atoi(buff);
		printf("%d\n", num);
	}
}

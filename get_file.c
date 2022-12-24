#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * get_file - open a file file input
 * @file: file name
 * Return: 1 if file exist, -1 if does not exist
 */
int get_file(char *file)
{
	FILE *fd;
	
	fd = fopen(file, "r");
	if (fd == NULL)
	{
		printf("no such file: %s\n", file);
		return (-1);
	}
	else
	{
		get_values(fd);
	}
	return (1);
}

#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument list
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
	}
	else
	{
		get_file(argv[1]);
	}
	return (0);
}

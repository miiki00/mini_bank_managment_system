#include "main.h"

/**
 * _check - check and if the input is valid it will pass it to the
 * right function if invalid return 1.
 * @inp: The input to be checked in.
 *
 * Return: 0 On success. 1 On error.
 */
int _check(char *inp)
{
	int i, j;
	char **list = {"help", "exit", "add", "rem"}; /*list of commands to check from*/

	for (i = 0; i < _commands; i++)
	{
		for (j = 0; j < strlen(list[i][j]); j++)
		{
			if (inp[j] != list[i][j])
				break;
		}
		if (i == 0 && j == 4)
		{
			_help_me();
			return (0);
		}
		if (i == 1 && j == 4)
			exit(0);
		if (i == 2 && j == 3)
			return (0);
		if (i == 3 && j == 3)
			return (0);
	}
	return (1);
}

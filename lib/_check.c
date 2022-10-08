#include "main.h"

/**
 * _check_pass - check and if the input is valid it will pass it to the
 * right function if invalid return 1.
 * @inp: The input to be checked in.
 *
 * Return: 0 On success. 1 On error.
 */
int _check_pass(char *inp)
{
	int i, j;
	char **command_list;
	int commands;

	command_list[0] = "help";
	command_list[1] = "exit";
	command_list[2] = "add";
	command_list[3] = "rem";
	commands = 4;
	for (i = 0; i < commands; i++)
	{
		for (j = 0; j < strlen(command_list[i]); j++)
		{
			if (inp[j] != command_list[i][j])
				break;
		}
		if (i == 0 && j == 4)
		{
			_help_message();
			return (0);
		}
		if (i == 1 && j == 4)
		{
			printf("Good bye ):\n");
			exit(0);
		}
		if (i == 2 && j == 3)
		{
			//add_user(inp);
			printf("Creating user\n");
			return (0);
		}
		if (i == 3 && j == 3)
		{
			//remove_user(
			printf("removing user\n");
			return (0);
		}
	}
	return (1);
}

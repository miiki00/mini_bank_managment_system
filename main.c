#include "main.h"

/**
 * main - Prompoter an paraser of user input.
 * Description: A simple Bank manangment system.
 *
 * Return: 0 on success. On error 1.
 */
int main(void)
{
	char *inp;
	char ret;

	while (1)
	{
		inp = malloc(sizeof(*inp) * 42);
		if (inp == NULL)
		{
			printf("Error: Programe can't open\nNot enough memory");
			return (1);
		}
		printf("Type 'help' for help\n"
			"Enter a command: ");
		ret = scanf("%s", inp);
		error_msg_chk(ret);
		if (ret <= 0)
		{
			printf("Unable to parase Input pleas Enter something valid\n\n");
			continue;
		}
		printf("Processing...\n");
		//ret = _check_pass(inp);
		if (1)
		{
			printf("Done\n\n");
		}
		else if (ret == 0)
		{
			printf("done");
		}
		free(inp);
	}
}

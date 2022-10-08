#include "main.h"

/**
 * _help_message - Displays a help message for the program.
 *
 * Return: Void.
 */
void _help_message(void)
{
	printf("//////////////////////////////////////////////////////\n"
		"//Welcome to mini bank managment system help message//\n"
		"//////////////////////////////////////////////////////\n\n\n"
		"Description: This is a simple bank managment program that has\n"
		"a basic functionality of bank managment system\n"
		"\t* Adding user\n"
		"\t* Removig user\n"
		"\t* Displaying user information\n"
		"\t\t* withdraw and deposit history\n"
		"\t\t* current amount\n"
		"\t\t* name to id and id to name search... and more\n"
		"\t* Depositing money\n"
		"\t* Withdrawing money\n"
		"   Usage:\n"
		"   help - Displays a this help message.\n"
		"   help {command_name} - Displays a more help message for a specific command.\n"
		"   add {user_name} - To add user to user_list.\n"
		"   rem {id} - To remove a user from user_list.\n"
		"   info {id} - To display information about a specific user.\n"
		"   search {user_name} - searches for a user in the user_list.\n"
	      );

}

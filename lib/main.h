#ifndef MAIN_H
#define MAIN_H

/* standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* local defination and declarations */
/* function prototypes */

int _check_pass(char *str);
void _help_message(void);
int _add_user(char *name);
int _remove_user(unsigned int id);
int _information_user(unsigned int id);
/*int _search(*/

/* Structs */

/**
 * struct user_info - contains basic user information.
 * @first_name: First name of the user.
 * @last_name: Last name of the user.
 * @age: Age of the user.
 * @sex: Gender of the use.
 * @location: location informaion about the user.
 * @id: Account id of the user.
 */

struct user_info
{
	char *first_name;
	char *last_name;
	unsigned int age;
	char sex;
	char *location;
	unsigned int id;
};

/**
 * struct user_id_info - conatains a user account information.
 * @id: The user account id.
 * @current_amount: The current amount of money in the account.
 * @transaction_history: The user transaction history.
 */
struct user_id_info
{
	unsigned int id;
	unsigned int current_amount;
	unsigned int *transaction_history;
};

#endif

// CLIENT SECTION (MAIN) //
#include "../lib/user_interface.h"
#include "../lib/sys/file.h"
int main()
{
    char id[16];
		char pass[8];
		char menu_choice[2];
		char temp_str[16];
		
        // Menu Screen //
        while(1)
        {
            menu(id, pass, 70);
            scanf("%s", menu_choice);

            if (strstr(menu_choice, "q")) { break; }
            else if (strstr(menu_choice, "1"))
            {
                screen(40, "How much to deposit?", 10, 16);
                scanf("%s", temp_str);

            }
            else if (strstr(menu_choice, "2"))
            {
                screen(40, "How much to withdraw?", 10, 16);
                scanf("%s", temp_str);
            }

            else if (strstr(menu_choice, "4"))
            {
                screen(70, "Do you really want to permanently delete your account?", 27, 2);
                scanf("%s", temp_str);
            }

    clrscr();
    // =========== //
  }
    return 0;
}

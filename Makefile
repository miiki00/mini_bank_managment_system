# ------------------------------- #
# BANK MANAGEMENT SYSTEM MAKEFILE #
# ------------------------------- #

CC= gcc
user_interface= lib/user_interface.c


client= src/client.c

.PHONY: run clean

ifeq ($(OS),Windows_NT)

run: $(client) $(file) $(user_interface)
	$(CC) $(client) $(file) $(user_interface) -o main.exe

clean: client
	del *.exe

else

run:$(client) $(user_interface)

	$(CC) $(client) $(file) $(user_interface) -o main

clean: client
	rm main

endif

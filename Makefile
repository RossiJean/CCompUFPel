CC = gcc
CFLAGS = -Wall -Wextra

%: %.c
	$(CC) $(CFLAGS) $< -o $@

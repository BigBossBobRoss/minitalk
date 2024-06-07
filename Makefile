SERVER = server
CLIENT = client

CFLAGS = -Wall -Werror -Wextra
CC = gcc
FLAGS = $(CFLAGS) -I$(LIBFTPRINTF)/headers -L$(LIBFTPRINTF) -lftprintf

LIBFTPRINTF = libftprintf

all: $(SERVER) $(CLIENT)

$(SERVER): server.c
	@make -s -C $(LIBFTPRINTF)
	@$(CC) $(FLAGS) server.c -o $(SERVER)
	@echo "Server is ready!"

$(CLIENT): client.c
	@make -s -C $(LIBFTPRINTF)
	@$(CC) $(FLAGS) client.c -o $(CLIENT)
	@echo "Client is ready!"

clean:
	@make clean -s -C $(LIBFTPRINTF)

fclean: clean
	@make fclean -s -C $(LIBFTPRINTF)
	@rm -f $(SERVER) $(CLIENT)
	@echo "Server and Client have been cleaned successfully"

re: fclean all

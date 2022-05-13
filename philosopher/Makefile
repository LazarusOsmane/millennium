SRC = src/main.c src/utils.c src/utils2.c src/utils3.c
OBJ = ${SRC:%.c=%.o}
CFLAG = -g3 -pthread -Wall -Wextra -Werror

all: philo

philo: $(OBJ)
	gcc $(CFLAG) $(OBJ) -o $@  share/libft/libft.a

%.o: %.c
	cd share/libft/ && make && cd ../../
	#cd share/Printf/ && make && cd ../../
	gcc $(CFLAG) -c $^ -o $@ 

clean: 
	rm src/*.o

fclean: clean 
	rm philo

re: fclean all

.PHONY: all fclean clean re bonus

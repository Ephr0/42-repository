# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbaker <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 12:32:01 by tbaker            #+#    #+#              #
#    Updated: 2023/06/04 21:01:06 by tbaker           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rush-02: main.o ft_atoi.o error.o open_dict.o write_output.o
	cc -Wall -Wextra -Werror main.o ft_atoi.o error.o open_dict.o write_output.o -o rush-02 

main.o: 
	cc -c -Wall -Wextra -Werror main.c rush02.h	

ft_atoi.o: 
	cc -c -Wall -Wextra -Werror ft_atoi.c rush02.h

error.o:
	cc -c -Wall -Wextra -Werror error.c rush02.h

open_dict.o:
	cc -c -Wall -Wextra -Werror open_dict.c rush02.h 

write_output.o:
	cc -c -Wall -Wextra -Werror write_output.c rush02.h 

clean:
	rm -f *.o rush-02
	
fclean: clean
	rm -f rush-02

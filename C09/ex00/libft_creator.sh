# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 21:12:28 by rade-sar          #+#    #+#              #
#    Updated: 2021/09/30 13:55:58 by rade-sar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -rf libstr.a
gcc -Wall -Wextra -Werror -c *.c
ar rc libstr.a *.o
ranlib libstr.a
rm *.o

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:44:58 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 16:00:52 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 32);
	else
		return (c);
}

/* int main (void)
{
	char prueba0 = 'u';
	char prueba1 = 'A';
	char prueba2 = '3';

	printf("%c\n",ft_tolower(prueba0));
	printf("%c\n",ft_tolower(prueba1));
	printf("%c\n",ft_tolower(prueba2));

	return(0);
} */

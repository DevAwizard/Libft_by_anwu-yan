/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:45:17 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 16:01:08 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	else
		return (c);
}
/* int main (void)
{
	char prueba0 = 'u';
	char prueba1 = 'A';
	char prueba2 = '3';

	printf("%c\n",ft_toupper(prueba0));
	printf("%c\n",ft_toupper(prueba1));
	printf("%c\n",ft_tolower(prueba2));

	return(0);
} */
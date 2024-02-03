/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:47:23 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 16:00:45 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (s[i] != '\0')
		i++;
	a = c;
	while (i >= 0)
	{
		if (s[i] == a)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	return (0);
}

/* int main (void)
{
	char string[] = "Hola soy Ana y soy azul";
	char character = 'y';

	printf("Standard strchr =%s\n",strchr(string,character));

	printf("My own strchr =%s\n",ft_strchr(string,character));

	return (0);
} */
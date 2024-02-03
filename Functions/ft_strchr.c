/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:44:35 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 13:19:57 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = c;
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	if (s[i] == a)
		return (&((char *)s)[i]);
	return (0);
}
/* int main (void)
{
	char string[] = "Hola soy Ana y soy azul";
	char character = '\0';

	printf("Standard strchr =%s\n",strchr(string,character));

	printf("My own strchr =%s\n",ft_strchr(string,character));

	return (0);
} */
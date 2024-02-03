/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:27:36 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 15:45:20 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (0);
}

/* int main (void)
{
	char string [] = "Hola a todos, encantado";
	int c = 't';

	printf("Standard =%s\n", memchr(string, c, 8));

	printf("My own =%s\n", ft_memchr(string, c, 8));

} */
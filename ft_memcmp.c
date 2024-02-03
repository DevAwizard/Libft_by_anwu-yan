/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:44:07 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 15:47:42 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		}
		i++;
	}
	return (0);
}

/* int main(void)
{
	char s1[] = "Lo has conseguido Ana";
	char s2[] = "Lo has consentido Ana";

	printf("Standard %d\n",memcmp(s1, s2, 15));
	printf("Standard %d\n",memcmp(s1, s2, 5));

	printf("My own %d\n",ft_memcmp(s1, s2, 15));
	printf("My own %d\n",ft_memcmp(s1, s2, 5));

	return(0);
} */
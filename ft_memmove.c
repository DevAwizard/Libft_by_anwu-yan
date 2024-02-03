/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:41:57 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 15:53:07 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			((char *) dst)[i] = ((const char *) src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			((char *) dst)[i] = ((const char *) src)[i];
		}
	}
	return (dst);
}
// Include or define your ft_memmove here

/* int main(void)
{
    // char src[] = "Hello, world!";
    char dst[50];

    // Using standard memmove for comparison
    // printf("Standard memmove result: %s\n", (char *)memmove(dst, src, 13));

    // Reset dst for your ft_memmove
    dst[0] = '\0';

    // Using your ft_memmove
    printf("My memmove result: %s\n", (char *)ft_memmove(dst, NULL, 13));

    return 0;
} */

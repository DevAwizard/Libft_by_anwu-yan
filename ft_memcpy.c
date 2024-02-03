/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:41:39 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 15:48:22 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *) dst)[i] = ((const char *) src)[i];
		i++;
	}
	return (dst);
}
/* int main(void)
{
	//char src[] = "Hola ana, muy bien has llegado hasta aqui";
	char dst[100];
 	memcpy((dst), ((void *)0), 3);
	// ft_memcpy(dst, src, 6);
	// ft_memcpy(((void *)0), ((void *)0), 3);
	// printf("%s\n", dst);

	return (0);
} */
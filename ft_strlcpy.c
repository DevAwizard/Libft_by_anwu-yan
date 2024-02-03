/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:42:44 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 12:43:28 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (dstsize == 0)
		return (i);
	j = 0;
	while (j < dstsize - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/* int main (void)
{
	char src[] = "Hello, worldsdswwdsdsdsf!";
    char dst[50];

	char src1[] = "Hello, worldsdswwdsdsdsf!";
    char dst1[50];

    // Using standard strlcpy for comparison
    printf("Standard strlcpy result: %lu\n", strlcpy(dst, src, 8));
	printf("DST = %s\n",dst);

	printf("Own function strlcpy result: %lu\n", ft_strlcpy(dst1, src1, 8));
	printf("DST = %s\n",dst);

	return (0);

} */
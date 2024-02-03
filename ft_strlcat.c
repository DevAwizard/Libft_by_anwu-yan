/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:42:39 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/18 15:56:48 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (dstsize > src_len + dst_len)
		dstsize = src_len + dst_len + 1;
	while (i < dstsize - 1 && src[j] != '\0' && dstsize > 0)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	if (src_len + dst_len > src_len + dstsize)
		return (src_len + dstsize);
	else
		return (src_len + dst_len);
}
/* int main (void)
{
	char src[] = "Anita20v";
    char dst[50] = "Hola, me llamo ";

	char src1[] = "Anita20v";
    char dst1[50] = "Hola, me llamo "; 

	char src1[] = "Hello, worldsdswwdsdsdsf!";
    char dst1[50]; 

    // Using standard strlcpy for comparison
    printf("Standard strlcat result: %lu\n", strlcat(dst, src, -1));
	printf("DST = %s\n",dst);

	printf("Own function strlcpy result: %lu\n", ft_strlcpy(dst1, src1, 8));
	printf("DST = %s\n",dst); 
	// printf("My own strlcat result: %lu\n", ft_strlcat(dst1, src1, 0));
	// printf("DST = %s\n",dst1);

	return (0);
} */
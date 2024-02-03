/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:58:05 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/27 18:16:35 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
	char s1 [] = "Hola Antonio";
	char s2 [] = "Hola Andres";

	printf("Standard %i\n", strncmp(s1, s2, 4));
	printf("Standard %i\n", strncmp(s1, s2, 8));

	printf("My own %i\n", ft_strncmp(s1, s2, 4));
	printf("My own %i\n", ft_strncmp(s1, s2, 8));
	
	return (0);

} */
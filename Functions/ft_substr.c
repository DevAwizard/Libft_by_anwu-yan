/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:58:15 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/22 17:59:41 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substring;
	size_t		j;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || ft_strlen(s) == 0 || len == 0)
	{
		substring = malloc(sizeof(char) * 1);
		if (!substring)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	if (len >= (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substring = malloc(sizeof(char) * ((len) + 1));
	if (!substring)
		return (NULL);
	j = 0;
	while (j < len && s[start] != '\0')
		substring[j++] = s[start++];
	substring[j] = '\0';
	return (substring);
}

/* int main(void)
{
	printf("%s\n", ft_substr("HOLA PEPE QUE TAL ESTAS ESTA TARDE?", 8, 3));
	
} */
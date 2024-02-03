/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:58:11 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 13:04:51 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	ok;

	i = 0;
	ok = 1;
	while (s1[i] != '\0' && ok == 1)
	{
		ok = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				ok = 1;
			j++;
		}
		i++;
	}
	return (i - 1);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	ok;

	ok = 1;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && ok == 1)
	{
		j = 0;
		ok = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				ok = 1;
			j++;
		}
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end || s1[0] == '\0')
	{
		newstring = ft_strdup("");
		return (newstring);
	}
	newstring = malloc(sizeof(char) * (end - start) + 2);
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		newstring[i++] = s1[start++];
	newstring[i] = '\0';
	return (newstring);
}

/* int main(void)
{
	char s1[] = "Hola que tal hace calor";
	char set[] = "Hola que tal hace calor";

	printf ("%s\n", ft_strtrim(s1,set));
} */
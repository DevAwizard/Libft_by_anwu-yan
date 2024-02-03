/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:58:29 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/03 16:05:13 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_delete(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
		free (array[i++]);
	free (array);
}

static	int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count_number;

	i = 0;
	count_number = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count_number++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count_number);
}

static	char	*ft_extract_substring(char const *s, char c)
{
	int		i;
	char	*string;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	string = malloc(sizeof(char) * (i + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!array)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			array[j++] = ft_extract_substring(&s[i], c);
			if (array[j - 1] == NULL)
				return (ft_delete(array, j - 1), NULL);
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (array[j] = NULL, array);
}

/* int main(void)
{
	char s[] = "          Hola_    soy_    Goiko  svfv ?rixfdif       ";
	char c = 'o';
	char **array;
	int i;

	i = 0;
	array = ft_split(s, c);
	//printf("Posicion del array %s\n", array[0]);
	while (array[i] != NULL)
		printf("%s\n", array[i++]);
	return (0);
} */
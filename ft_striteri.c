/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:58:03 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 12:53:18 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void ft_prueba1(unsigned int i, char* s)
{
	if(i % 2 == 0 && (*s >= 'a' && *s <= 'z'))
		*s = *s - 32;
} */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
}

/* int main(void)
{
	char s[] = "Estoy hasta las narices";
	ft_striteri(s, &ft_prueba1);
	printf("%s\n", s);
	return (0);
} */
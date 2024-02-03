/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:58:23 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/26 13:58:29 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len_n(int n)
{
	int	number_of_digits;

	number_of_digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		number_of_digits++;
	while (n != 0)
	{
		n = n / 10;
		number_of_digits++;
	}
	return (number_of_digits);
}

char	*ft_itoa(int n)
{
	char	*newstring;
	int		i;

	i = ft_len_n(n);
	newstring = malloc(sizeof(char) * (i + 1));
	if (newstring == NULL)
		return (NULL);
	if (n < 0)
		newstring[0] = '-';
	newstring[i--] = '\0';
	if (n == 0)
		newstring[0] = '0';
	while (n)
	{
		if (n % 10 < 0)
			newstring[i--] = ((n % 10) * -1) + 48;
		else
			newstring[i--] = (n % 10) + 48;
		n = n / 10;
	}
	return (newstring);
}
/* int main(void)
{
	int n;

	n = 7525;
	printf("el int %d es el string %s\n",n, ft_itoa(n));

	return (0);
} */
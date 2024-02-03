/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:43:44 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/01 15:01:42 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + str[i] - 48;
		i++;
	}
	return (n * sign);
}

/* int main(void)
{
	char s1[] = "		+-32k9";

	printf("Standard atoi =%i\n",atoi(s1));

	char c[] = "		    -3k438";
	
	printf("Imprime c despues de atoi original =%i\n", atoi(c)); 

	printf("Imprime c despues de atoi propio =%i\n", ft_atoi(c)); 

	return (0);
} */

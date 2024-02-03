/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:40:53 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/31 16:58:34 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = s;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
}
/* int main(void)
 {
	char prueba [] = "Hola me llamo Ana, tu puedes, confio en ti!";
	char prueba2 [] = "Hola me llamo Ana, tu puedes, confio en ti!";
	ft_bzero(prueba, 5);
	bzero(prueba2, 5);
	//printf("%s\n", prueba);

	int i;
	i = 0;
	while(prueba[i] != '!')
	{
		write(1, &prueba[i], 1);
		i++;
	}
	write (1,"\n", 1);
	i = 0;
	while(prueba2[i] != '!')
	{
		write(1, &prueba2[i], 1);
		i++;
	}
 }
 */
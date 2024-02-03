/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:57:56 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 13:08:14 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_printnumbers(int n, int fd)
{
	char	s[10];
	int		i;

	i = 0;
	while (n)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
		write (fd, &s[i--], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1;
	}
	ft_printnumbers (n, fd);
}

/*int main(void)
{
    int     fd;
    int     n;
    n = -5656;
    fd = open("putstr_fd.txt", 1);
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return (1);
    }
    ft_putnbr_fd(n, fd);
    close(fd);
    return (0);
} */
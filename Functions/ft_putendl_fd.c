/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:57:51 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/01/26 13:53:56 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write (fd, &s[i], sizeof(char));
			i++;
		}
		write (fd, "\n", sizeof(char));
	}
}
/* int main(void)
{
    char  s[] = "Hace tiempo ke vengo al taller\ny no se a ke vengo...";
    int     fd;
    int     i;
    i = 0;
    fd = open("putendl.txt", 1);
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return (1);
    }
     ft_putendl_fd(s, fd);
    close(fd);
    return (0);
}  */
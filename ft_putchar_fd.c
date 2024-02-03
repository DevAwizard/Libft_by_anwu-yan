/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:57:48 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 13:08:23 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, sizeof(c));
}

/* int main()
{
    // Writing 'H' to standard output (stdout)
    ft_putchar_fd('H', 1);
    
    // Writing 'e' to standard output (stdout)
    ft_putchar_fd('e', 1);
    
    // Writing 'l' to standard output (stdout)
    ft_putchar_fd('l', 1);
    
    // Writing 'l' again to standard output (stdout)
    ft_putchar_fd('l', 1);
    
    // Writing 'o' to standard output (stdout)
    ft_putchar_fd('o', 1);
    
    // Writing '!' to standard output (stdout)
    ft_putchar_fd('!', 1);
    
    // Writing a newline character to standard output to move to the next line
    ft_putchar_fd('\n', 1);

	return (0);
} */
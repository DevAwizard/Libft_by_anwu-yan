/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:42:56 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 13:08:27 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
/* int main()
{
    char str[50];
    
    // Initialize the array with '.'
    ft_memset(str, '.', sizeof(str) - 1); // Leave space for null terminator
    
    // Set the first 10 characters of str to 'A'
    ft_memset(str, 'A', 10);
    
    // Null-terminate the string
    str[sizeof(str) - 1] = '\0';
    
    // Print the modified array
    printf("Modified array: %s\n", str);
    
    return 0;
} */

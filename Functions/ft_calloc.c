/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:43:26 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/02 13:04:02 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	p = malloc (count * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}
/* int main()
{
    int *array;
    size_t count = 10; // Number of elements
    size_t i = 0;
    
    // Allocate memory for an array of 10 integers
    array = (int *)ft_calloc(count, sizeof(int));
    if (!array)
    {
        printf("Memory allocation failed\n");
        return 1; // Return with error code
    }
    
    // Use a while loop to print the array elements
    while (i < count)
    {
        printf("array[%zu] = %d\n", i, array[i]);
        i++;
    }
    
    // Free the allocated memory
    free(array);
    
    return 0;
} */
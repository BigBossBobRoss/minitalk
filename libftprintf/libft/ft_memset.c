/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:31:45 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/13 16:18:28 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets each byte of the memory block pointed to by dst to the value c,
 * up to a specified length len.
 * It returns the pointer dst after modifying the memory block.
 */

void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*s;

	s = dst;
	while (len--)
	{
		*s++ = (unsigned char)c;
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	array[10];

// 	ft_memset(array, 'A', sizeof(array)); // Fills the array with 'A'
// 	// Just for demonstration, print the array to show the result
// 	for (int i = 0; i < sizeof(array); ++i)
// 	{
// 		printf("%c", array[i]);
// 	}
// 	return (0);
// }

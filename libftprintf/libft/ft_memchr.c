/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:11:52 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:03:17 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of the character c in the memory block
 * pointed to by str, up to a specified length n. It iterates through the
 * memory block using a while loop and checks if each byte matches c.
 *
 * If a match is found, it returns a pointer to that byte.
 * If no match is found within the specified length, it returns NULL.
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s = str;

	while (n--)
	{
		if (*s == (unsigned char)c)
		{
			return ((void *)s);
		}
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str[] = "Hello, World!";
// 	int			c;
// 	size_t		n;
// 	char		*result;

// 	c = 'W';
// 	n = sizeof(str);
// 	result = ft_memchr(str, c, n);
// 	if (result != NULL)
// 	{
// 		printf("Character '%c' found at position: %ld\n", c, (long)(result
// 				- str));
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", c);
// 	}
// 	return (0);
// }

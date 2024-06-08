/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:48:05 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:03:22 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares the memory blocks pointed to by s1 and s2 up to a specified length n.
 * It iterates through the memory blocks using a while loop, comparing each byte.
 *
 * If a byte in s1 is not equal to the corresponding byte in s2,
 * it returns the difference between the two bytes.
 * If all bytes are equal within the specified length,
 * it returns 0 to indicate that the memory blocks are equal.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*i1 = s1;
	const unsigned char	*i2 = s2;

	while (n--)
	{
		if (*i1 != *i2)
		{
			return (*i1 - *i2);
		}
		i1++;
		i2++;
	}
	return (0);
}

// int	main()
// {

//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     int result = ft_memcmp(str1, str2, sizeof(str1));
//     printf("Comparison 1 Result: %d\n", result);

// 	return (0);
// }

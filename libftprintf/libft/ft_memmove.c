/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:28:07 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:03:34 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies n bytes from the memory area pointed to by src to the memory area
 * pointed to by dest. It handles overlapping memory regions correctly by
 * using a temporary buffer. It returns a pointer to the destination memory area.
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*d_end;
	const unsigned char	*s_end;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s)
		return (dst);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d_end = d + len - 1;
		s_end = s + len - 1;
		while (len--)
			*d_end-- = *s_end--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	example[20] = "Hello, World!";

// 	// Move part of the string "Hello, " into " World!" to form "Hello, World!"
// 	ft_memmove(example + 7, example, 12);
// 	// example now contains "Hello, Hello, World!"
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:04:12 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:01 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Appends a null-terminated string from src to the end of dest,
 * ensuring proper null termination within a limited size of n.
 *
 * It returns the total length of the resulting string,
 * considering the length of dest and the length of the appended src string.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	copy_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	copy_len = dstsize - dst_len - 1;
	if (copy_len > src_len)
		copy_len = src_len;
	ft_memcpy(dst + dst_len, src, copy_len);
	dst[dst_len + copy_len] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// int main()
// {
// 	char a[20] = "Hello";
// 	char b[20] = "Broonga";
// 	ft_strlcat(a, b, 15);
// 	// strlcat(a, b, 15);
// 	printf("%s\n", a);
// }

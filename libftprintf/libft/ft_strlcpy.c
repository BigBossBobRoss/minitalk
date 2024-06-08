/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:53:39 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:07 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a null-terminated string from src to dst, ensuring proper null
 * termination within a limited size. It returns the length of the source string.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			s;
	unsigned int	count;

	s = 0;
	count = 0;
	while (src[count])
		count++;
	if (dstsize < 1)
		return (count);
	while (src[s] && s < dstsize - 1)
	{
		dst[s] = src[s];
		s++;
	}
	dst[s] = '\0';
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:03:32 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:02:47 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for an array of elements with a specified count and size.
 * It allocates memory with malloc, and zeroes out the memory before
 * returning the pointer to the allocated memory.
 */

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	char	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	s = 0;
	while (s < count * size)
	{
		result[s] = '\0';
		s++;
	}
	return (result);
}

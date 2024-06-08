/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:01:13 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:02:37 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets the first n bytes of the memory pointed to by s to zero.
 * It iterates through the mem block by decrementing n, and for each iteration,
 * it assigns the value 0 to the current byte pointed to by s.
 */

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*s;

	s = dst;
	while (n--)
	{
		*s++ = 0;
	}
}

// int	main(void)
// {
// 	int	array[10];

// 	ft_bzero(array, sizeof(array));
// 	return (0);
// }

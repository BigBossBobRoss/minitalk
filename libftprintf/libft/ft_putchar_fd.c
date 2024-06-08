/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:41:27 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/15 13:27:42 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes the character c to the specified file descriptor fd.
 * The write system call writes the entire string to the file descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

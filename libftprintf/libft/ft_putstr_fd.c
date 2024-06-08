/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:51:40 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/15 13:26:44 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes the string s to the specified file descriptor fd.
 * The write system call writes a single character to the file descriptor.
 */

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

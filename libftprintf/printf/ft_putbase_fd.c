/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:06:56 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/23 13:48:39 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_putbase_fd(int nbr, const char *base, int fd)
{
	int		base_len;
	long	n;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		n = (-(long)nbr);
	}
	else
		n = (long)nbr;
	if (n >= base_len)
		ft_putbase_fd(n / base_len, base, fd);
	ft_putchar_fd(base[n % base_len], fd);
}

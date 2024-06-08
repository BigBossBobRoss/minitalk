/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:53:12 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/29 13:26:22 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_puthexa_addr(unsigned long n, char format)
{
	char	*base;
	int		i;

	i = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < 16)
		i += ft_putchar(base[n]);
	else
	{
		i += ft_puthexa_addr(n / 16, format);
		i += ft_putchar(base[n % 16]);
	}
	return (i);
}

int	ft_putaddress(void *addr)
{
	unsigned long	n;
	int				i;

	n = (unsigned long)addr;
	i = ft_putstr("0x");
	i += ft_puthexa_addr(n, 'x');
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:32:03 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/29 13:22:37 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_callargs(va_list arg, char spec_flag)
{
	void	*addr;

	if (spec_flag == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (spec_flag == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (spec_flag == 'p')
	{
		addr = va_arg(arg, void *);
		if (addr)
			return (ft_putaddress(addr));
		return (ft_putstr("0x0"));
	}
	else if (spec_flag == 'd' || spec_flag == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (spec_flag == 'u')
		return (ft_putunsigned(va_arg(arg, unsigned int)));
	else if (spec_flag == 'x' || spec_flag == 'X')
		return (ft_puthexa(va_arg(arg, unsigned int), spec_flag));
	else if (spec_flag == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			len += ft_printf_callargs(arg, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

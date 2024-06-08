/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:55:05 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/28 16:43:15 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_putunsigned(unsigned long n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789";
	if (n >= 10)
		i += ft_putunsigned(n / 10);
	i += ft_putchar(base[n % 10]);
	return (i);
}

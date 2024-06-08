/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:48:49 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/29 13:21:46 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char format)
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
		i += ft_puthexa(n / 16, format);
		i += ft_putchar(base[n % 16]);
	}
	return (i);
}

// int main() {
//     unsigned long ulong_max = ULONG_MAX;
//     unsigned long long_max = LONG_MAX;
//     unsigned long long_min = (unsigned long)LONG_MIN;

//     printf("ULONG_MAX: ");
//     ft_puthexa(ulong_max, 'x');
//     printf("\n");

// 	ft_printf("ULONG_MAX: ");
//     ft_puthexa(ulong_max, 'x');
//     printf("\n");

// //     // printf("LONG_MAX: ");
// //     // ft_puthexa(long_max, 'x');
// //     // printf("\n");

// //     // printf("LONG_MIN (as unsigned): ");
// //     // ft_puthexa(long_min, 'x');
// //     // printf("\n");

//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:24:52 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/15 11:43:04 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an integer n into a string representation.
 * It determines the length of the number, allocates memory for the string,
 * and converts each digit of the number into a character by dividing and modulo.
 * The resulting string is returned, with a negative sign added if necessary.
 */

static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static char	*new_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nbr;

	len = nbr_len(n);
	str = new_str(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (len > 0 && nbr != 0)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*result;

// 	result = ft_itoa(123);
// 	printf("123 -> %s\n", result);
// 	free(result);

// 	result = ft_itoa(-123);
// 	printf("-123 -> %s\n", result);
// 	free(result);

// 	result = ft_itoa(0);
// 	printf("0 -> %s\n", result);
// 	free(result);

// 	result = ft_itoa(INT_MAX);
// 	printf("INT_MAX (%d) -> %s\n", INT_MAX, result);
// 	free(result);

// 	result = ft_itoa(INT_MIN);
// 	printf("INT_MIN (%d) -> %s\n", INT_MIN, result);
// 	free(result);
// 	return (0);
// }

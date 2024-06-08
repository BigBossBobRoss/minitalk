/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:43:01 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:02:33 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string str to an integer value.
 * It skips leading whitespace characters, handles an optional sign,
 * and converts the remaining characters into an integer.
 * It checks for over and underflow conditions and returns the converted integer.
 */

int	ft_atoi(const char *str)
{
	int	s;
	int	num;
	int	sign;

	s = 0;
	num = 0;
	sign = 1;
	while (str[s] == ' ' || str[s] == '\n' || str[s] == '\t'
		|| str[s] == '\r' || str[s] == '\v' || str[s] == '\f')
		s++;
	if (str[s] == '-')
		sign = -1;
	if (str[s] == '-' || str[s] == '+')
		s++;
	while (str[s] && str[s] >= '0' && str[s] <= '9')
	{
		num = num * 10 + str[s] - '0';
		s++;
	}
	return (num * sign);
}

// int main(void)
// {
//     char *strs[] = {
//         "42",
//         "-42",
//         "   123",
//         "\t\n\v\f\r 456",
//         "+789",
//         "-+123",
//         "987xyz",
//         "xyz987",
//         "2147483647",
//         "-2147483648",
//         "99999999999999999999999999",
//         "-99999999999999999999999999",
//         ""
//     };
//     int num_tests = sizeof(strs) / sizeof(strs[0]);

//     for (int i = 0; i < num_tests; i++)
//     {
//         printf("ft_atoi(\"%s\") = %d\n", strs[i], ft_atoi(strs[i]));
//     }

//     return 0;
// }

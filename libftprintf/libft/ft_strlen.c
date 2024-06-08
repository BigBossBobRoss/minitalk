/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:26:53 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:12 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of a null-terminated string.
 * It takes a pointer to a constant character array (str) as input.
 *
 * It initializes a variable i as 0 and then iterates through the characters
 * of the string until it encounters the null terminator (‘\0’).
 *
 * For each character, it increments i.
 * Finally, it returns the value of i, representing the length of the string.
*/

int	ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

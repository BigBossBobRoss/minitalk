/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:16:41 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/15 13:00:54 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of the character c in the string str.
 * It iterates through the characters of str using a while loop,
 * checking if each character matches c.
 *
 * If a match is found, it returns a pointer to that character.
 * If no match is found, it returns NULL.
 */

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     // Example usage
//     const char *str = "roongaB";
//     char target = 'B';
//     char *result = ft_strchr(str, target);

//     if (result != NULL) {
//         printf("Character '%c' at position: %ld\n", target, result - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", target);
//     }

//     return (0);
// }

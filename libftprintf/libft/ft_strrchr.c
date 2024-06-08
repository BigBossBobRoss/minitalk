/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:50:36 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:27 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the last occurrence of the character c in the string str.
 * It iterates through the characters of str using a while loop,
 * updating a pointer end_str whenever a match is found.
 *
 * After the loop, it checks if the last character of str matches c
 * and returns a pointer to that character if it does.
 * Otherwise, it returns the pointer end_str,
 * which points to the last occurrence of c or NULL if no match is found.
*/

char	*ft_strrchr(const char *str, int c)
{
	const char	*end_str;

	end_str = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			end_str = str;
		}
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return ((char *)end_str);
}

// int	main(void)
// {
// 	const char	*str = "roonga";
// 	char		target;
// 	char		*result;

// 	// Example usage
// 	target = 'B';
// 	result = ft_strrchr(str, target);
// 	if (result != NULL)
// 	{
// 		printf("Character '%c' at position: %ld\n", target, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", target);
// 	}
// 	return (0);
// }

// UNFINISHED

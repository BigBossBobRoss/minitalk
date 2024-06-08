/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:21:37 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:16 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares up to n characters of two strings, s1 and s2, to determine if they
 * are equal or which one is lexicographically less or greater than the other.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s;

	s = 0;
	if (n == 0)
		return (0);
	while (s < n)
	{
		if (s1[s] != s2[s] || s1[s] == '\0' || s2[s] == '\0')
		{
			return ((unsigned char)s1[s] - (unsigned char)s2[s]);
		}
		s++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hellz";
// 	int		result;

// 	result = ft_strncmp(str1, str2, sizeof(str1));
// 	if (result < 0)
// 	{
// 		printf("'%s' is less than '%s'\n", str1, str2);
// 	}
// 	else if (result > 0)
// 	{
// 		printf("'%s' is greater than '%s'\n", str1, str2);
// 	}
// 	else
// 	{
// 		printf("'%s' is equal to '%s'\n", str1, str2);
// 	}
// 	return (0);
// }

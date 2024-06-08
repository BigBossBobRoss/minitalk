/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:04:07 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:22 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of the string needle within the
 * string haystack, up to a specified length len.
 *
 * It iterates through haystack character by character and compares it
 * with needle, ensuring the length constraint is met.
 *
 * If a match is found, it returns a pointer to the match.
 * Otherwise, it returns NULL to indicate no match was found.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	s;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	while (*haystack && len >= needle_len)
	{
		s = 0;
		while (needle[s] && haystack[s] == needle[s] && s < needle_len)
			s++;
		if (s == needle_len)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*haystack1 = "Hello World";
// 	const char	*needle1 = "World";
// 	size_t		len1;

// 	len1 = 11;
// 	const char	*result1 = ft_strnstr(haystack1, needle1, len1);
// 	if (result1)
// 		printf("Found: '%s'\n", result1);
// 	else
// 		printf("Not found.\n");
// }

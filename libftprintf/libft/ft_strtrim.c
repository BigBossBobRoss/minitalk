/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:05:35 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/13 16:18:36 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Trims the leading and trailing characters from a string s1
 * that match any character in the set.
 *
 * It allocates memory for the trimmed string, copies the non-matching
 * characters from s1 to the new string, adds a null terminator,
 * and returns the pointer to the trimmed string.
 */

static int	char_check(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && char_check(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && char_check(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*str) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (end > start)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char const	*s1;
// 	char const	*set;
// 	char		*result;

// 	s1 = "   Hello, World!   ";
// 	set = " ";
// 	result = ft_strtrim(s1, set);
// 	printf("Test 1: '%s'\n", result);
// 	free(result);
// }

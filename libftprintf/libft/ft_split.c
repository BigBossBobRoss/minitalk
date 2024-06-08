/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:29:57 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/13 17:59:33 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Splits the string s into an array of strings based on the delimiter
 * character c. It counts the number of words in the string, allocates memory
 * for the array of strings, and then splits the string into individual words,
 * creating an array of strings. The resulting array of strings is returned.
 */

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static char	**splitting(char const *s, char c, char **array, size_t words)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	while (words > i)
	{
		while (s[start] == c)
			start++;
		len = 0;
		while (s[start + len] && s[start + len] != c)
			len++;
		array[i] = ft_substr(s, start, len);
		if (!(array[i]))
		{
			free_array(i, array);
			return (NULL);
		}
		start += len;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	return (splitting(s, c, array, words));
}

// #include <stdio.h>
// int	main(void)
// {
//     char **result;
//     const char *str = "Hello,World,Split,Me";
//     int i;

//  	result = ft_split(str, ',');
//     if (!result)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     for (i = 0; result[i] != NULL; i++)
//     {
//         printf("Split string [%d]: %s\n", i, result[i]);
//         free(result[i]);
//     }
//     free(result);

//     return (0);
// }

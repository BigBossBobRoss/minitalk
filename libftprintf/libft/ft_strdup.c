/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:51:50 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:03:51 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a string s1 by allocating memory for a new string, copying
 * the contents of s1 into it, and returning the pointer to the new string.
 */

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*copy;

	i = 0;
	while (s1[i])
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*original = "Hello, World!";
// 	char		*duplicate;

// 	duplicate = ft_strdup(original);
// 	if (duplicate == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("Duplicate: %s\n", duplicate);
// 	free(duplicate);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:45:02 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/15 12:50:26 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function f to each character of the string s, generating
 * a new string with the modified characters. It first determines the length
 * of the input string and allocates memory for the new string.
 *
 * Then, it iterates over the characters of the input string,
 * applying the function f and storing the result in the new string.
 * The resulting modified string is returned.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// char	uppercase(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (ft_toupper(c));
// 	else
// 		return (ft_tolower(c));
// }

// int	main(void)
// {
// 	char	*result;

// 	result = ft_strmapi("Example String", uppercase);
// 	if (result != NULL)
// 	{
// 		printf("Original: Example String\n");
// 		printf("Modified: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("An error occurred.\n");
// 	}
// 	return (0);
// }

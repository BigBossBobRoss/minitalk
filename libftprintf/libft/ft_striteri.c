/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:17:19 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/15 12:50:18 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function f to each character of the string s, along with its index.
 * It checks if both s and f are valid pointers before proceeding.
 *
 * It initializes a counter i to keep track of the index and iterates over the
 * characters of the string s, applying the function f with the index&character.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}

// #include <stdio.h>

// void	toggle_case(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c = ft_toupper(*c);
// 	else
// 		*c = ft_tolower(*c);
// }

// int	main(void)
// {
// 	char	str[] = "Example String to Be Modified";

// 	printf("Before: %s\n", str);
// 	ft_striteri(str, toggle_case);
// 	printf("After:  %s\n", str);
// 	return (0);
// }

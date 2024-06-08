/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:57:45 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:40 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Extracts a substring from a string s starting
 * at index start with a specified length len.
 *
 * It allocates memory for the substring, copies the characters from s
 * to the substring, and returns the pointer to the substring.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (NULL);
	if (len > 0)
		ft_strlcpy(sub_s, &s[start], len +1);
	else
		sub_s[0] = '\0';
	return (sub_s);
}

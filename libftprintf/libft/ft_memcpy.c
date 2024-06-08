/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:14:50 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:03:27 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies n bytes from the memory area pointed to by src to the memory area
 * pointed to by dest. It returns a pointer to the destination memory area.
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			sh;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	sh = 0;
	while (n--)
	{
		d[sh] = s[sh];
		sh++;
	}
	return (dst);
}

// int main()
// {
// char csrc[] = "GeeksforGeeks";
// char cdest[100];
// ft_memcpy(cdest, csrc, strlen(csrc)+1);
// printf("Copied string is %s", cdest);

// int isrc[] = {10, 20, 30, 40, 50};
// int n = sizeof(isrc)/sizeof(isrc[0]);
// int idest[n], i;
// ft_memcpy(idest, isrc, sizeof(isrc));
// printf("\nCopied array is ");
// for (i=0; i<n; i++)
//     printf("%d ", idest[i]);
// return (0);
// }

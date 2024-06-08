/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:10:00 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:45 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an uppercase alphabetic character to its lowercase equivalent
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c = c + 32);
	else
		return (c);
}

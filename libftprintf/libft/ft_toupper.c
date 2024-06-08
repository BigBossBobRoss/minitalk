/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:02:52 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:54 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a lowercase alphabetic character to its uppercase equivalent
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c = c - 32);
	else
		return (c);
}

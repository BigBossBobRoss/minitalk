/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:54:11 by sshahini          #+#    #+#             */
/*   Updated: 2024/03/28 16:26:54 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_putstr(char const *s)
{
	if (!s)
		return (write (1, "(null)", 6));
	else
		return (write(1, s, ft_strlen(s)));
}

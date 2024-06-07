/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahini <sshahini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 21:00:47 by sshahini          #+#    #+#             */
/*   Updated: 2024/06/07 21:48:32 by sshahini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libftprintf/libft/libft.h"
# include "libftprintf/printf/ft_printf.h"
# include <signal.h>
# include <stdio.h>
# include <unistd.h>

void	send_bit(int pid, char c);
void	sig_handler(int sig);
void	convert_to_char(int sig, siginfo_t *info, void *context);

#endif

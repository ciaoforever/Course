/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:42:26 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/01 15:55:07 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(char const *str);
int		ft_puutnbr(int n);
int		ft_u_puutnbr(unsigned int n);
int		ft_puutchar(int c);
int		ft_puutstr(char *s);
int		ft_printf(const char *str, ...);
#endif
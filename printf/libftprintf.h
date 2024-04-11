/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:29:30 by marianga          #+#    #+#             */
/*   Updated: 2024/04/11 12:59:38 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIFTPRINTF_H
# define LIFTPRINTF_H

//va_list, va_start, va_arg, va_end
# include <stdarg.h>

//printf
# include <stdio.h>

//write
# include <unistd.h>

int ft_printf(char const *format, ...);

#endif
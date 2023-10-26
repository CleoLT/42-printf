/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:56:01 by ale-tron          #+#    #+#             */
/*   Updated: 2023/10/26 11:56:31 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"
# define FT_PRINTF_H

int	ft_printf(const char *str, ...);	
int	ft_print_char(int c);
int	ft_print_string(const char *src);
int	ft_print_hex(unsigned int num);

#endif

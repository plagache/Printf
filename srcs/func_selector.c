/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_selector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:15:38 by plagache          #+#    #+#             */
/*   Updated: 2019/10/28 12:15:39 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arg.h"
#include "libft.h"

void			fill_arr(t_conv_func *arr)
{
	arr['d'] = &ft_conv_int;
	arr['i'] = &ft_conv_int;
	arr['o'] = &ft_conv_octal;
	arr['u'] = &ft_conv_unsigned;
	arr['x'] = &ft_conv_hexa;
	arr['X'] = &ft_conv_hexa_upper;
	arr['%'] = &ft_conv_percent;
	arr['s'] = &ft_conv_string;
	arr['c'] = &ft_conv_char;
	arr['f'] = &ft_conv_float;
	arr['p'] = &ft_conv_address;
}

t_conv_func		get_func(char c)
{
	t_conv_func	arr[256];

	ft_bzero(arr, sizeof(t_conv_func) * 256);
	fill_arr(&(arr[0]));
	return (arr[(int)c]);
}

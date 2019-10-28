/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:14:28 by plagache          #+#    #+#             */
/*   Updated: 2019/10/28 12:14:51 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arg.h"
#include "libft.h"

void	get_address_value(unsigned long *val_ptr, va_list *arg_ptr)
{
	*val_ptr = (unsigned long)va_arg(*arg_ptr, void *);
}

int		calc_len_address(t_conv_id *s_ptr, unsigned long value)
{
	int	len;

	len = unsigned_len_base(value, 16);
	len = (s_ptr->width > len + 2 ? s_ptr->width : len + 2);
	return (len);
}

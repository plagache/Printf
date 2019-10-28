/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:28:46 by plagache          #+#    #+#             */
/*   Updated: 2019/10/28 13:08:51 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(int c, char const s1, char const s2)
{
	char	*mem;

	mem = ft_strjoin(s1, s2);
	if (s1 == 0)
		return ((char*)s2);
	if (s2 == 0)
		return ((char*)s1);
	if (c == 1 || c == 3)
		free(s1);
	if (c == 2 || c == 3)
		free(s2);
	return (mem);
}

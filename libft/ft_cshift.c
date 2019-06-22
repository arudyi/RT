/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cshift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abutok <abutok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:42:05 by abutok            #+#    #+#             */
/*   Updated: 2017/11/04 16:02:33 by abutok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_cshift(char c, int i)
{
	if (i > 8)
		i %= 8;
	c = (c << i) | (c >> (8 - i));
	return (c);
}
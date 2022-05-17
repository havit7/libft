/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:21:37 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 20:03:42 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = ft_strlen(dst);
	b = ft_strlen(src);
	c = 0;
	if (dstsize <= a)
		return (dstsize + b);
	while (dst[c] != '\0' && c < (dstsize - 1))
		c++;
	while (*src && c < (dstsize - 1))
	{
		dst[c] = *src;
		c++;
		src++;
	}
	dst[c] = '\0';
	return (a + b);
}

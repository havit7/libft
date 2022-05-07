/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:21:37 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/07 17:44:56 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
    unsigned int a;
	unsigned int b; 

	a = 0;
	b = ft_strlen(dst);

    if (!dst || !src)
        return (0);
    if (dstsize == 0 || !src)
        return (b);
    while (src[a] != '\0')
	{
        dst[b] = src[a];
		b++;
		a++;
	}
	dst[b] = '\0';
    return (dstsize);
}

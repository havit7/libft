/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:02:11 by javirodr          #+#    #+#             */
/*   Updated: 2022/04/24 19:02:17 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int ft_strlen(const char *s)
{
    int a;

    a = 0;
    while (s[a] != '\0')
        a++;
    return (a);
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	while ((const char *)src && n > 0 && ft_strlen(dst) > n)
	{
		dst = (char *)src;
		dst++;
		src++;
		n--;
	}
	return (dst);
}

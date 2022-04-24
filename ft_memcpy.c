/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:02:11 by javirodr          #+#    #+#             */
/*   Updated: 2022/04/24 17:15:23 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	while (n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	return(dst);
}

int	main(void)
{
	char dst[10] = "";
	char src[] = "Hola que tal";
	int a = 4;
	memcpy(dst, src, a);
	ft_memcpy(dst, src, a);
	printf("original: %s", dst);
	printf("mia: %s", dst);
}

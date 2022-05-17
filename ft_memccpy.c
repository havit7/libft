/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:26:29 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 18:36:21 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (src == 0 && dst == 0)
		return (0);
	while (n > i)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		if (((unsigned char *) src)[i - 1] == (unsigned char) c)
			return (&((unsigned char *)dst)[i]);
	}
	return (0);
}

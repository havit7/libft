/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:57:35 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 18:40:50 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;

	a = 0;
	while (a < len)
		((unsigned char *)b)[a++] = (unsigned char )c;
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:31:22 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 19:36:54 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(unsigned long count, unsigned long size)
{
	void	*s1;

	s1 = malloc(count * size);
	if (!s1)
		return (0);
	ft_bzero(s1, (count * size));
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:59:47 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 16:24:31 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	a;

	a = 0;
	while (a <= ft_strlen(s))
	{
		if (s[a] == ((unsigned char)c))
			return (&((char *)s)[a]);
		a++;
	}
	return (0);
}

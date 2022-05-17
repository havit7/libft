/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:47:49 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 18:48:21 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	a;

	a = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (&((char *)s)[a]);
	while (a--)
	{
		if (s[a] == (unsigned char)c)
			return (&((char *)s)[a]);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:15:24 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 18:51:19 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	a;
	unsigned int	b;
	char			*s2;

	if ((ft_strlen(s) + 1) < len || len > 2147483647)
		s2 = malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	a = 0;
	b = 0;
	while (s[a] && a <= ft_strlen(s))
	{
		if (a >= start && b < len)
			s2[b++] = s[a];
		a++;
	}
	s2[b] = '\0';
	return (s2);
}

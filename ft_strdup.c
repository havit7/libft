/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:47:09 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 18:45:02 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char			*s2;
	unsigned int	a;
	unsigned int	c;

	a = ft_strlen(s1);
	c = 0;
	s2 = malloc(sizeof(char) * (a + 1));
	if (s1 == 0 || s2 == 0)
		return (0);
	while (s1[c])
	{
		s2[c] = s1[c];
		c++;
	}
	s2[c] = '\0';
	return (s2);
}

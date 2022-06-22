/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:24:03 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 19:51:44 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	a;

	a = 0;
	if (!s)
		return (0);
	s2 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (0);
	while (s[a])
	{
		s2[a] = f(a, s[a]);
		a++;
	}
	s2[a] = '\0';
	return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:41:30 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/23 15:44:14 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	a;
	unsigned int	b;
	char			*s3;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (0);
	s3 = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (0);
	while (s1[a] != '\0')
	{
		s3[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		s3[a] = s2[b];
		a++;
		b++;
	}
	s3[a] = '\0';
	return (s3);
}

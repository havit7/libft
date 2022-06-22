/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:19:03 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 19:14:41 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_separe(char *s, unsigned int len, int count)
{
	unsigned int	w;
	unsigned int	i;
	char			**result;

	w = 0;
	i = 0;
	result = ft_calloc((count + 1), sizeof(char *));
	if (result == 0)
		return (0);
	if (s[i] != '\0')
		result[w++] = ft_strdup(&s[i]);
	i++;
	while (i < len)
	{
		if (s[i] != '\0' && s[i - 1] == '\0')
			result[w++] = ft_strdup(&s[i]);
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	a;
	unsigned int	len;
	int				count;
	char			*s2;
	char			**res;

	len = ft_strlen(s);
	s2 = ft_strdup(s);
	if (s2 == 0)
		return (0);
	count = 0;
	a = 0;
	while (a < len)
	{
		if (s2[a] == c)
			s2[a] = '\0';
		else if (a == 0 || s2[a - 1] == '\0')
			count++;
		a++;
	}
	res = ft_separe(s2, len, count);
	free(s2);
	return (res);
}

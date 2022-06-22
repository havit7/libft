/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:25:29 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 17:49:38 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	a;

	if (*needle == '\0')
		return ((char *)haystack);
	a = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= a)
	{
		if ((*haystack == *needle) && ft_memcmp(haystack, needle, a) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

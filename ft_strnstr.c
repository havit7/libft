/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:25:29 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/17 15:50:04 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[a++] != '\0' && len-- > 0)
	{
		while (*haystack == *needle && len-- > 0)
		{
			b = a;
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (*(char *)haystack));
	}
	return (0);
}

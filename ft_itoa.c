/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:33:52 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 19:35:15 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(int n)
{
	int	a;

	a = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		a++;
	}
	while (n != 0)
	{
		n /= 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char		*s1;
	int			a;
	long		na;

	na = n;
	a = ft_count(n);
	s1 = malloc(sizeof(char) * (a + 1));
	if (!s1)
		return (0);
	s1[a--] = '\0';
	if (na == 0)
		s1[0] = 48;
	if (na < 0)
	{
		s1[0] = '-';
		na *= -1;
	}
	while (na > 0)
	{
		s1[a--] = (na % 10) + 48;
		na /= 10;
	}
	return (s1);
}

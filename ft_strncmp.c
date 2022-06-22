/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:36:26 by javirodr          #+#    #+#             */
/*   Updated: 2022/05/16 20:05:41 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	a;
	unsigned char	*s11;
	unsigned char	*s22;

	a = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s11[a] != '\0' && s22[a] != '\0' && a < (n - 1) && s11[a] == s22[a])
		a++;
	return (s11[a] - s22[a]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:28:24 by javirodr          #+#    #+#             */
/*   Updated: 2022/06/22 18:45:17 by javirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void	*content)
{
	t_list	*nuevalista;

	nuevalista = (t_list *)malloc(sizeof(*nuevalista));
	if (!nuevalista)
		return (0);
	nuevalista->content = content;
	nuevalista->next = 0;
	return (nuevalista);
}

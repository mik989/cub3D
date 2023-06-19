/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:22:14 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:06:01 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (lst != NULL)
	{
		temp = lst;
		while (temp)
		{
			(*f)(temp->content);
			temp = temp->next;
			if (temp == NULL)
				return ;
		}
	}
}

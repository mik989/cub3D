/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:37:56 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:06:09 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*flwr;
	t_list	*new;

	flwr = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
			ft_lstclear(&flwr, del);
		ft_lstadd_back(&flwr, new);
		lst = lst->next;
	}
	return (flwr);
}

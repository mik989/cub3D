/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:24:58 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:10:18 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptd;
	char	*pts;
	size_t	i;

	ptd = (char *)dest;
	pts = (char *)src;
	i = 0;
	while (i < n)
	{
		ptd[i] = pts[i];
		i++;
	}
	return (dest);
}

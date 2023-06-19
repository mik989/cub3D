/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:17:36 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:07:01 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	ft_putnbr_xup(uintptr_t nbr, int fd, int *count)
{	
	if (nbr >= 16)
	{
		ft_putnbr_xup(nbr / 16, fd, count);
		ft_putnbr_xup(nbr % 16, fd, count);
	}
	else
		ft_putchars_fd("0123456789ABCDEF"[nbr], fd, count);
}

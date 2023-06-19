/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:36:33 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:06:56 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(uintptr_t nbr, int fd, int *count)
{	
	if (nbr >= 16)
	{
		ft_putnbr_base_fd(nbr / 16, fd, count);
		ft_putnbr_base_fd(nbr % 16, fd, count);
	}
	else
		ft_putchars_fd("0123456789abcdef"[nbr], fd, count);
}

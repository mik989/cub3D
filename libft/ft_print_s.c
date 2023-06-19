/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:16:21 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:06:42 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_s(char *stringa, int fd, int *count)
{
	if (!stringa)
		ft_putstrs_fd("(null)", fd, count);
	else
		ft_putstrs_fd(stringa, fd, count);
}

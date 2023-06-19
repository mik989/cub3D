/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:51:18 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:09:39 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrs_fd(char *s, int fd, int *count)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchars_fd(s[i], fd, count);
		i++;
	}
}

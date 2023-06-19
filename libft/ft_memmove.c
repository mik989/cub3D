/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:06:50 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:10:13 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
char dest[]="puzza di fogna";
const char src[]="bastarda puttana";
unsigned int n= 0;
ft_memmove(dest, src, n);
//memmove(dest, src, n);
printf("%s\n", dest);
}*/

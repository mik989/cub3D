/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:00:38 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:11:43 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*pt;

	pt = (char *)s;
	i = 0;
	while (i < n)
	{	
		pt[i] = '\0';
		i++;
	}
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="puzza di fogna";
	unsigned int n = 8;
	ft_btzero(str,c, n);
	//btzero(str, c, n);
	printf("%s\n", str);
}
*/

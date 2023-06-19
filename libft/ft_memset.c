/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:57:40 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:10:09 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*pt;

	pt = (char *)s;
	i = 0;
	while (i < n)
	{	
		pt[i] = c;
		i++;
	}
	return (s);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="puzza di fogna";
	unsigned int c = '$';
	unsigned int n = 8;
	ft_memset(str,c, n);
	//memset(str, c, n);
	printf("%s\n", str);
}*/

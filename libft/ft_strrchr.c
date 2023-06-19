/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:48:36 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:08:46 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			i = (char *)s;
		s++;
	}
	if (i)
		return (i);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "acd";
	printf("%s ", ft_strrchr(a, 'b'));
}
*/
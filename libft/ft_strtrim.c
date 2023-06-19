/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:14:00 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:08:41 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	char	*b;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	a = ft_strlen(s1);
	while (a && ft_strchr(set, s1[a]))
		a--;
	b = ft_substr((char *)s1, 0, a + 1);
	return (b);
}

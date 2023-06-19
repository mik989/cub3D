/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:57:23 by ocastell          #+#    #+#             */
/*   Updated: 2023/04/29 18:08:50 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = -1;
	if (*little == '\0')
		return ((char *)big);
	while (big[++i] != '\0' && i <= len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && little[j] != '\0' && i <= len)
			{
				i++;
				j++;
			}
		}
		if (little[j] == '\0' && i <= len)
		{
			i -= j;
			return ((char *)&big[i]);
		}
		i -= j;
	}
	return (NULL);
}

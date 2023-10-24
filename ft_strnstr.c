/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:11:34 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/25 13:11:51 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (to_find[i] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] && i < len)
	{
		x = 0;
		while (to_find[x] && (i + x < len))
		{
			if (str[i + x] != to_find[x])
				break ;
			x++;
		}
		if (to_find[x] == '\0')
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

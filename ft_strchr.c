/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:22:04 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/28 14:39:13 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	const unsigned char	*s;
	char				*result;

	result = 0;
	s = (const unsigned char *)str;
	while (*s != (unsigned char)c)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}

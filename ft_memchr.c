/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:43:50 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/20 11:04:20 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;

	s = (const unsigned char *)str;
	while (n > 0)
	{
		if (*s == (unsigned char)c)
		{
			return ((void *)s);
		}
		s++;
		n--;
	}
	return (NULL);
}

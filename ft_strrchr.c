/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:56:04 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/28 14:40:30 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*s;

	s = NULL;
	while (*str)
	{
		if (*str == (char)c)
			s = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)s);
}

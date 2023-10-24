/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:08:59 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/21 11:45:13 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	void	*dest;

	dest = str1;
	if (!str1 && !str2)
	{
		return (str1);
	}
	while (n--)
	{
		*(char *)str1++ = *(char *)str2++;
	}
	return (dest);
}

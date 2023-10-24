/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:38:31 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/28 13:25:08 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	original_dest;

	original_dest = ft_strlen(dest);
	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (src_len);
	if (dest_len > size)
		return (src_len + size);
	while (src[i] != 0 && size > dest_len + 1)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = 0;
	return (src_len + original_dest);
}

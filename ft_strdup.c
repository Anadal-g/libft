/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:52:59 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/19 17:18:32 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(str) + 1;
	copy = (char *)malloc(len);
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(copy, str, len +1);
	return (copy);
}

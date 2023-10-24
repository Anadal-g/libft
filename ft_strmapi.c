/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:48:56 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/11 14:16:46 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	i = 0;
	result = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !*f || !result)
	{
		return (NULL);
	}
	while (*s)
	{
		result[i] = f(i, *s);
		s++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:50:09 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/25 11:36:46 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	trimmed_len;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[start]))
		++start;
	while (end > start && ft_strchr(set, s1[end - 1]))
		--end;
	trimmed_len = end - start;
	trimmed = (char *)malloc(trimmed_len + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, trimmed_len + 1);
	return (trimmed);
}

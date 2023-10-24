/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:36:44 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/11 14:12:39 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t tam)
{
	void	*result;

	if (n == SIZE_MAX || tam == SIZE_MAX)
		return (NULL);
	result = malloc(n * tam);
	if (result != NULL)
	{
		ft_memset(result, 0, n * tam);
	}
	return (result);
}

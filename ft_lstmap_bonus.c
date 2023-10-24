/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:58:36 by anadal-g          #+#    #+#             */
/*   Updated: 2023/09/26 17:46:04 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	void	*set;

	if (!lst || !f || !del)
		return (0);
	ret = 0;
	while (lst)
	{
		set = f(lst->content);
		tmp = ft_lstnew(set);
		if (!tmp)
		{
			del(set);
			ft_lstclear(&ret, del);
			return (ret);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}

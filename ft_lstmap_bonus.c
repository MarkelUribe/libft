/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:17:47 by muribe-l          #+#    #+#             */
/*   Updated: 2024/01/05 14:58:22 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!new)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
		{
			
		}
	}
	return (new);
}

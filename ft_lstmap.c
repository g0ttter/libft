/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 15:35:04 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/17 21:27:10 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *current;
	t_list *new;
	t_list *head;

	if (lst == NULL || f == NULL)
		return (NULL);
	current = f(lst);
	new = ft_lstnew(current->content, current->content_size);
	if (new == NULL)
		return (NULL);
	head = new;
	lst = lst->next;
	while (lst)
	{
		current = f(lst);
		new->next = ft_lstnew(current->content, current->content_size);
		if (new->next == NULL)
			return (NULL);
		lst = lst->next;
		new = new->next;
	}
	return (head);
}

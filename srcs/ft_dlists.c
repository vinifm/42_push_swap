/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlists.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:22:07 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/23 17:09:02 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Doubly linked list functions.

// Create a new doubly list.
t_dlst	*ft_dlstnew(int num)
{
	t_dlst	*lnew;

	lnew = (t_dlst *) malloc(sizeof(t_dlst));
	if (!lnew)
		return (0);
	lnew->num = num;
	lnew->next = NULL;
	lnew->prev = NULL;
	return (lnew);
}

// Goes to last element of the list.
t_dlst	*ft_dlstlast(t_dlst *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// Add element to the end of the list.
void	ft_dlstadd_back(t_dlst **lst, t_dlst *new)
{
	t_dlst	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_dlstlast(*lst);
	tmp->next = new;
	new->prev = tmp;
	free(tmp);
}

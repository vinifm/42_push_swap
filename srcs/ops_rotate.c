/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:48:06 by viferrei          #+#    #+#             */
/*   Updated: 2022/07/20 20:49:42 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shift up all elements of the stack by 1. The first elements becomes the last.
void	rotate(t_dlst **stack)
{
	t_dlst	*last;
	t_dlst	*old_first;

	last = ft_dlstlast((*stack));
	old_first = (*stack);
	(*stack) = (*stack)->next;
	(*stack)->prev = NULL;
	old_first->next = NULL;
	old_first->prev = last;
	last->next = old_first;
}

void	ra(t_dlst **stack_a)
{
	if (!(*stack_a)->next)
		return ;
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_dlst **stack_b)
{
	if (!(*stack_b)->next)
		return ;
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_data *data)
{
	rotate(&(data->stack_a));
	rotate(&(data->stack_b));
	write(1, "rr\n", 3);
}

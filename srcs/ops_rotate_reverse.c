/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:23:14 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/03 19:21:55 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shift down all elements of the stack by 1. The last elements becomes the
// first.
void	rotate_reverse(t_dlst **stack)
{
	t_dlst	*last;

	if (!(*stack))
		return ;
	last = ft_dlstlast(*stack);
	(*stack)->prev = last;
	(*stack)->next->next = NULL;
	last->next = (*stack);
	last->prev = NULL;
	(*stack) = last;
}
void	rra(t_dlst **stack_a)
{
	rotate_reverse(stack_a);
	write(1, "rra\n", 4);
}
void	rrb(t_dlst **stack_b)
{
	rotate_reverse(stack_b);
	write(1, "rrb\n", 4);
}
void	rrr(t_data *data)
{
	rotate_reverse(&(data->stack_a));
	rotate_reverse(&(data->stack_b));
	write(1, "rrr\n", 4);
}

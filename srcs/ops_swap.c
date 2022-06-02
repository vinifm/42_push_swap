/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:43:18 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/02 22:12:24 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Swap the first two elements of the stack.
void	swap(t_dlst **stack)
{
	t_dlst	*old_first;

	old_first = *stack;
	*stack = (*stack)->next;
	old_first->prev = (*stack);
	old_first->next = (*stack)->next;
	(*stack)->next = old_first;
	(*stack)->prev = NULL;
}
void	sa(t_dlst **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}
void	sb(t_dlst **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}
void	ss(t_data *data)
{
	swap(&(data->stack_a));
	swap(&(data->stack_b));
	write(1, "ss\n", 3);
}

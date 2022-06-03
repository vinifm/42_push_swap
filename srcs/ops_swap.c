/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:43:18 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/03 19:21:34 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Swap the first two elements of the stack.
void	swap(t_dlst **stack)
{
	t_dlst	*second;

	if (!(*stack))
		return ;
	second = (*stack)->next;
	(*stack)->prev = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	second->prev = NULL;
	second->next = (*stack);
	(*stack) = second;
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

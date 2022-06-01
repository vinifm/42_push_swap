/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:43:18 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/01 21:03:33 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	drop: removes the first element of the stack. Returns a pointer to the
**	seconde one.
*/

// se sa receber data em vez de t_dlst*, será o mesmo que receber
// um t_dlst** ?
void	swap(t_dlst **stack)
{
	t_dlst	*aux;

	aux = *stack;
	*stack = (*stack)->next;
	aux->prev = (*stack);
	aux->next = (*stack)->next;
	(*stack)->next = aux;
	(*stack)->prev = NULL;
}

void	sa(t_dlst **stack)
{
	swap(stack);
	write(1, "sa\n", 3);
}

// void	sb(t_dlst *stack)
// {

// }
// void	ss(t_data *data)
// {

// }

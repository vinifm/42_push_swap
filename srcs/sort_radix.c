/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:32:14 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/30 21:16:10 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//	turns the number of the stack from 0 to len(stack_a).
//	e.g. (5, -2, 3, -46) becomes (3, 1, 2, 0)

// returns 1 if the given number is not in the list, or zero if it is
// int	not_in_lst(t_list *lst, int min)
// {
// 	while (lst)
// 	{
// 		if (min == lst->content)
// 			return (0);
// 		lst = lst->next;
// 	}
// 	return (1);
// }

// t_list order_nums(t_dlst *stack)
// {
// 	t_list *lst;
// 	int		min;

// 	min = stack->num;
// 	while (stack->next)
// 	{
// 		if ((min > stack->next) && not_in_lst(lst, min))
// 			min = stack->next;
// 	}
// }

// PROBS: transformar o numero minimo em 0 não vai atrapalhar o resto do loop?
// void	make_positive(t_data *data)
// {
// 	t_dlst	*stack;
// 	t_dlst	*min;
// 	size_t	i;
// 	// size_t	j;

// 	stack = data->stack_a;
// 	min = stack;
// 	i = 0;
// 	while (i < ft_dlst_len(stack))
// 	{
// 		if (stack->num > stack->next->num)
// 			min = stack->next;
// 		stack = stack->next;
// 	}
// }

// void	sort_radix(t_data *data)
// {
// 	make_positive(data);

// }

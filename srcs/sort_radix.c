/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:32:14 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/30 23:47:35 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//	turns the number of the stack from 0 to len(stack_a).
//	e.g. (5, -2, 3, -46) becomes (3, 1, 2, 0)

// tentar fazer um bubble sort:
// https://www.geeksforgeeks.org/bubble-sort/


// returns 1 if the given number is not in the list, or zero if it is
// int	not_in_lst(t_dlst *lst, int min)
// {
// 	while (lst)
// 	{
// 		if (min == lst->num)
// 			return (0);
// 		lst = lst->next;
// 	}
// 	return (1);
// }

// void	ft_pop(t_dlst **stack, int min)
// {
// 	t_dlst *start;

// 	if (!*stack)
// 		return ;
// 	if ((*stack)->num == min)
// 		(*stack) =
// 	while (*stack)
// 	{
// 		if ((*stack)->num == min)
// 		{
// 			if ((*stack)->prev)
// 				(*stack)->prev->next = (*stack)->next;
// 			if ((*stack)->next)
// 				(*stack)->next->prev = (*stack)->prev;
// 		}
// 		(*stack) = (*stack)->next;
// 		// free(tmp);
// 	}
// 	(*stack = start)
// }

// t_dlst *order_nums(t_dlst *stack)
// {
// 	t_dlst		*lst;
// 	t_dlst		*start;
// 	int			min;
// 	size_t		len;

// 	lst = NULL;
// 	start = stack;
// 	min = stack->num;
// 	len = ft_dlst_len(stack);
// 	while (len)
// 	{
// 		stack = start;
// 		while (stack->next)
// 		{
// 			if ((min > stack->next->num))
// 				min = stack->next->num;
// 			stack = stack->next;
// 		}
// 		ft_dlstadd_back(&lst, min);
// 		// ft_pop(&start, min);
// 		len--;
// 	}

// 	// TEST
// 	printf("\nLIST:");
// 	while (lst)
// 	{
// 		printf("%d", lst->num);
// 		lst = lst->next;
// 	}
// 	printf("\n\n");
// 	return (lst);
// }

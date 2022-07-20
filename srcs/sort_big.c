/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:32:14 by viferrei          #+#    #+#             */
/*   Updated: 2022/07/20 23:42:16 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_ints(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	bubble_sort(int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap_ints(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int	find_stack_index(int *arr, int stack_num, int len)
{
	int	index;

	index = 0;
	while (len)
	{
		if (stack_num == arr[index])
			break ;
		index++;
		len--;
	}
	return (index);
}

void	make_stack_positive(t_dlst **stack, int *arr)
{
	int		index;
	int		len;
	t_dlst	*start;

	len = ft_dlst_len(*stack);
	start = *(stack);
	while (*stack)
	{
		index = find_stack_index(arr, (*stack)->num, len);
		(*stack)->num = index;
		*stack = (*stack)->next;
	}
	*(stack) = start;
}

void	sort_big(t_data *data)
{
	int		*stack_arr;
	int		index;
	t_dlst	*stack;

	stack_arr = malloc(sizeof(int) * data->len);
	index = 0;
	stack = data->stack_a;
	while (stack)
	{
		stack_arr[index] = stack->num;
		stack = stack->next;
		index++;
	}
	bubble_sort(stack_arr, data->len);
	make_stack_positive(&(data->stack_a), stack_arr);
	sort_radix(data);
	free(stack_arr);
}

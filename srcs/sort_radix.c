/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:32:14 by viferrei          #+#    #+#             */
/*   Updated: 2022/07/15 16:34:03 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//	turns the number of the stack from 0 to len(stack_a).
//	e.g. (5, -2, 3, -46) becomes (3, 1, 2, 0)

void	print_array(int arr[], t_data *data)
{
	int	i;

	i = 0;
	while (i < data->len)
	{
		ft_printf("%d ", arr[i]);
		i++;
	}
	ft_printf("\n");
}

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
		while(j < len - i - 1)
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

// 0 10 5 6 3 20 -5
// -5 0 3 5 6 10 20

void	make_stack_positive(t_dlst **stack, int *arr, int *index_list)
{
	int	index;
	t_dlst	*start;

	start = *(stack);
	while (*stack)
	{
		index = find_stack_index(arr, (*stack)->num, ft_dlst_len(*stack))
		(*stack)->num = index_list[index];
		*stack = (*stack)->next;
	}
	*(stack) = start;
}

void	big_sort(t_data *data)
{
	int	stack_arr[data->len];
	int	index_list[data->len];
	int	index;
	t_dlst	*stack;

	index = 0;
	while (index < data->len)
	{
		index_list[index] = index;
		index++;
	}
	index = 0;
	stack = data->stack_a;
	while (stack)
	{
		stack_arr[index] = stack->num;
		stack = stack->next;
		index++;
	}
	bubble_sort(stack_arr, data->len);
	make_stack_positive(&(data->stack_a), stack_arr, index_list);

	// TEST TEST TEST
	print_array(stack_arr, data);
}

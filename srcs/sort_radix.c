/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:32:14 by viferrei          #+#    #+#             */
/*   Updated: 2022/07/13 21:22:49 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//	turns the number of the stack from 0 to len(stack_a).
//	e.g. (5, -2, 3, -46) becomes (3, 1, 2, 0)

// tentar fazer um bubble sort:
// https://www.geeksforgeeks.org/bubble-sort/

void	print_array(int arr[], t_data *data)
{
	int	i;

	i = 0;
	while (i < data->len)
	{
		ft_printf("%d ", arr[i]);
		i++;
	}
}

void	sort_radix(t_data *data)
{
	int	arr[data->len];
	bubble_sort(&arr, data->stack_a, data->len);

	// TEST TEST TEST
	print_array(arr, data);
}

void	copy_stack(int *arr[], t_dlst *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = stack->num;
		stack = stack->next;
		i++;
	}
}

void	swap_ints(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	bubble_sort(int *arr[], t_dlst *stack, int len)
{
	int	i;
	int	j;

	i = 0;
	copy_stack(arr, stack, len);
	while (i < len - 1)
	{
		while(j < len - i - 1)
		{
			if (*arr[j] > *arr[j + 1])
				swap_ints(arr[j], arr[j + 1]);
			j++;
		}
		i++;
	}
}


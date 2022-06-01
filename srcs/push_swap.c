/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/06/01 15:39:40 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_data *data)
{
	int	n1;
	int	n2;
	int	n3;

	// if is_sorted(data)
	// 	return ;
	n1 = data->stack_a->num;
	n2 = data->stack_a->next->num;
	n3 = data->stack_a->next->next->num;
	if ((n1 > n2 && n1 < n3 && n2 < n3)
		|| (n1 > n2 && n1 > n3 && n2 > n3)
		|| (n1 < n2 && n1 < n3 && n2 > n3))
		sa(&(data->stack_a));
	// if (n1 > n2 && n1 > n3 && n2 < n3)
	// 	ra(data->stack_a);
	// if (n1 < n2 && n1 > n3 && n2 > n3)
	// 	rra(data->stack_a)
}

t_data	*init_data(char **argv)
{
	t_data	*data;
	int		i;
	int		number;

	data = (t_data *) malloc(sizeof(t_data));
	if (!data)
		ft_exit(data, 4);
	data->stack_b = (t_dlst *) malloc(sizeof(t_dlst));
	if (!data->stack_b)
		ft_exit(data, 5);
	i = 1;
	number = (int) ft_atoi(argv[i++]);
	data->stack_a = ft_dlstnew(number);
	while (argv[i])
	{
		number = (int) ft_atoi(argv[i++]);
		if (check_if_dup(data->stack_a, number))
			ft_error(6);
		ft_dlstadd_back(&data->stack_a, ft_dlstnew(number));
	}
	return (data);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 1)
		return (0);
	check_ints(argv);
	data = init_data(argv);
	if (argc < 5)
		sort_three(data);

	while (data->stack_a)
	{
		printf("%d ", data->stack_a->num);
		data->stack_a = data->stack_a->next;
	}
	printf("\n");

	ft_exit(data, 0);
	return (0);
}

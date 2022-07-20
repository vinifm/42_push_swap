/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:47:21 by viferrei          #+#    #+#             */
/*   Updated: 2022/07/20 17:59:08 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_test_read(t_data *data)
{
	t_dlst	*aux_a;
	t_dlst	*aux_b;

	aux_a = data->stack_a;
	aux_b = data->stack_b;
	printf("\n");
	puts("stack a:");
	while (aux_a)
	{
		printf("%d ", aux_a->num);
		aux_a = aux_a->next;
	}
	printf("\n\n");
	puts("stack b:");
	if (aux_b)
	{
		while (aux_b)
		{
			printf("%d ", aux_b->num);
			aux_b = aux_b->next;
		}
	}
	printf("\n");
}

t_data	*init_data(char **argv)
{
	t_data	*data;
	int		i;
	int		number;

	data = (t_data *) malloc(sizeof(t_data));
	if (!data)
		ft_exit(data, 4);
	data->stack_b = NULL;
	i = 1;
	number = (int) ft_atoi(argv[i++]);
	data->stack_a = ft_dlstnew(number);
	while (argv[i])
	{
		number = (int) ft_atoi(argv[i++]);
		if (check_if_dup(data->stack_a, number))
			ft_error(6);
		ft_dlstadd_back(&data->stack_a, number);
	}
	data->len = ft_dlst_len(data->stack_a);
	return (data);
}

int	main(int argc, char **argv)
{
	t_data	*data;
	int	i;

	if (argc == 1)
		return (0);
	i = 0;
	while (argv[++i])
		check_if_int(argv[i]);
	data = init_data(argv);
	if (argc == 4)
		sort_three(data);
	if (argc > 4 && argc < 7)
		sort_five(data);
	else
		big_sort(data);

	ft_test_read(data);

	ft_exit(data, 0);
	return (0);
}

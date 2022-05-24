/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:26:23 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/24 21:54:34 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_error(int exit_code)
{
	write(2, "Error\n", 7);
	exit(exit_code);
}

void	ft_exit(t_data *data, int exit_code)
{
	t_dlst	*tmp;

	if (data->a->lst)
	{
		while (data->a->lst)
		{
			tmp = data->a->lst;
			data->a->lst = data->a->lst->next;
			free(tmp);
		}
	}
	if (data->a)
		free(data->a);
	if (data->b)
		free(data->b);
	if (data)
		free(data);
	if (exit_code)
		exit(exit_code);
}

int	check_ints(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i])
		check_if_int(argv[i]);
	return (0);
}

void	check_if_int(char *argv)
{
	int		i;
	double	num;

	i = 0;
	if (argv[i] == '-')
	{
		if (!argv[++i])
			ft_error(1);
	}
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			ft_error(2);
		i++;
	}
	num = ft_atoi(argv);
	if (num > INT_MAX || num < INT_MIN)
		ft_error(3);
}

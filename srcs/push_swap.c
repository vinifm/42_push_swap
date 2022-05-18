/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:41:09 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/18 13:03:46 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_int(char *argv);

int	ft_error(void)
{
	write(2, "Error\n", 7);
	exit(1);
}

int	main(int argc, char **argv)
{
	(void)	argc;

	printf("%d\n\n", ft_atoi("239823893820938"));
	check_ints(argv);
	return(0);
}

int	check_ints(char **argv)
{
	int	i;
	// int	num;

	i = 0;

	while (argv[++i])
		check_if_int(argv[i]);

	// while (argv[++i])
	// {
	// 	num = ft_atoi(argv[i]);
	// 	printf("%d\n", num);
	// 	if (num > INT_MAX || num < INT_MIN)
	// 		ft_error();
	// }
	return (0);
}

void	check_if_int(char *argv)
{
	int	i;
	int	num;

	i = 0;
	// printf("%s\n", argv);

	if (argv[i] == '-')
	{
		if (!argv[++i])
			ft_error();
	}
	while(argv[i])
	{
		if(!ft_isdigit(argv[i]))
			ft_error();
		i++;
	}
	num = ft_atoi(argv);
	printf("%d\n", num);
	if (num > INT_MAX || num < INT_MIN)
		ft_error();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:45:24 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/25 22:05:20 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

/* -------- EXCLUIR DEPOIS -------- */
# include <stdio.h>
/* -------------------------------- */

typedef struct s_dlst
{
	int				num;
	struct s_dlst	*next;
	struct s_dlst	*prev;
}				t_dlst;

typedef struct s_data
{
	t_dlst	*stack_a;
	t_dlst	*stack_b;
}				t_data;

// error_manage.c
int		ft_error(int exit_code);
void	ft_exit(t_data *data, int exit_code);
int		check_ints(char **argv);
void	check_if_int(char *argv);
int		check_if_dup(t_dlst *stack_a, int number);

// ft_dlists.c
t_dlst	*ft_dlstnew(int num);
t_dlst	*ft_dlstlast(t_dlst *lst);
void	ft_dlstadd_back(t_dlst **lst, t_dlst *new);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:45:24 by viferrei          #+#    #+#             */
/*   Updated: 2022/05/31 18:00:49 by viferrei         ###   ########.fr       */
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
void	ft_dlstadd_front(t_dlst **lst, t_dlst *new);
t_dlst	*ft_dlstrm_front(t_dlst **lst);
t_dlst	*ft_dlstlast(t_dlst *lst);
void	ft_dlstadd_back(t_dlst **lst, t_dlst *new);

// ops_swap.c
void	swap(t_dlst *stack);
void	sa(t_dlst *stack);
// void	sb(t_dlst *stack);
// void	ss(t_data *data);

// // ops_rotate.c
// void	rotate(t_dlst *stack);
// void	ra(t_dlst *stack);
// void	rb(t_dlst *stack);
// void	rr(t_data *data);

// // ops_rotate_reverse.c
// void	rra(t_dlst *stack);
// void	rrb(t_dlst *stack);
// void	rrr(t_data *data);

#endif

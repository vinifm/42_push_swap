/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:45:24 by viferrei          #+#    #+#             */
/*   Updated: 2022/07/15 15:39:40 by viferrei         ###   ########.fr       */
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
	int		min;
	int		len;
}				t_data;

typedef struct s_vars
{
	int		min;
	int		len;
}				t_vars;

// error_manage.c
int		ft_error(int exit_code);
void	ft_exit(t_data *data, int exit_code);
int		check_ints(char **argv);
void	check_if_int(char *argv);
int		check_if_dup(t_dlst *stack_a, int number);

// ft_dlists.c
t_dlst	*ft_dlstnew(int num);
void	ft_dlstadd_front(t_dlst **lst, int num);
t_dlst	*ft_dlstlast(t_dlst *lst);
void	ft_dlstadd_back(t_dlst **lst, int num);
size_t	ft_dlst_len(t_dlst *lst);

// ops_push.c
void	push(t_dlst **stack_0, t_dlst **stack_1);
void	pa(t_data	*data);
void	pb(t_data	*data);

// ops_rotate_reverse.c
void	rotate_reverse(t_dlst **stack);
void	rra(t_dlst **stack_a);
void	rrb(t_dlst **stack_b);
void	rrr(t_data *data);

// ops_rotate.c
void	rotate(t_dlst **stack);
void	ra(t_dlst **stack_a);
void	rb(t_dlst **stack_b);
void	rr(t_data *data);

// ops_swap.c
void	swap(t_dlst **stack);
void	sa(t_dlst **stack_a);
void	sb(t_dlst **stack_b);
void	ss(t_data *data);

// sort_radix.c
void	big_sort(t_data *data);

// sort_small_utils.c
int		is_sorted(t_dlst *stack);
void	get_min(t_dlst *stack, t_vars *vars);
void	push_to_b(t_data *data, t_vars *vars);

// sort_small.c
void	sort_three(t_data *data);
void	sort_five(t_data *data);
void	push_to_b5(t_data *data, int index);
void	push_to_b4(t_data *data, int index);

#endif

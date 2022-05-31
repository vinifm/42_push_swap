# 42_push_swap

<table>
	<tr>
		<th>Program name</th>
		<td>push_swap</td>
	</tr>
	<tr>
		<th>Arguments</th>
		<td>stack A: a list of integers</td>
	</tr>
	<tr>
		<th>Description</th>
		<td>This project sorts data on a stack, with a limited set of instructions, using the lowest possible number of actions.</td>
	</tr>
</table>

You've got two stacks (A and B):
- stack A contains negative and positive integers that cannot be duplicated.
- stack B is empty.

The goal is to sort in ascending order numbers into stack A. To do so you have the following operations at your disposal:

- **sa (swap a)**: Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- **sb (swap b)**: Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- **ss** : sa and sb at the same time.
- **pa (push a)**: Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **pb (push b)**: Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **ra (rotate a)**: Shift up all elements of stack a by 1. The first element becomes the last one.
- **rb (rotate b)**: Shift up all elements of stack b by 1. The first element becomes the last one.
- **rr** : ra and rb at the same time.
- **rra (reverse rotate a)**: Shift down all elements of stack a by 1. The last element becomes the first one.
- **rrb (reverse rotate b)**: Shift down all elements of stack b by 1. The last element becomes the first one.
- **rrr** : rra and rrb at the same time.

### Usage
```sh
$> ./push_swap <list of integers>
```

### Program output
The list of instructions possible to sort stack A, the smallest number being at the top.

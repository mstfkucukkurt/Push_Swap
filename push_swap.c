/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:34:06 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 16:46:57 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_smallsort(t_struct **stackA, t_struct **stackB, int ac)
{
	if (ac == 2)
	{
		if ((*stackA)->value > (*stackA)->next->value)
			ft_swap_a(stackA);
	}
	else if (ac == 3)
		ft_sort_three(stackA);
	else if (ac == 4)
		ft_sourt_four(stackA, stackB);
	else if (ac == 5)
		ft_sort_five(stackA, stackB);
}

static int	get_max_bits(t_struct *stack)
{
	t_struct	*tmp;
	int			max;
	int			max_bits;

	tmp = stack;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radixsort(t_struct **stackA, t_struct **stackB)
{
	t_struct	*tmp;
	int			i;
	int			j;
	int			size;
	int			max_bits;

	i = 0;
	tmp = *stackA;
	size = ft_lstsize(tmp);
	max_bits = get_max_bits(*stackA);
	while (i < max_bits && !ft_is_sorted(*stackA))
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *stackA;
			if (((tmp->index >> i) & 1) == 1)
				ft_rot_a(stackA);
			else
				ft_push_b(stackA, stackB);
		}
		while (ft_lstsize(*stackB) != 0)
			ft_push_a(stackA, stackB);
		i++;
	}
}

void	ft_main_sort(t_struct **stackA, t_struct **stackB, int ac)
{
	if (ac <= 5)
		ft_smallsort(stackA, stackB, ac);
	else
		ft_radixsort(stackA, stackB);
}

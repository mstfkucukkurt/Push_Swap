/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:44:46 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 13:44:46 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_swap_a(t_struct **stackA)
{
	t_struct	*head;

	if (stackA && (*stackA)->next != NULL)
	{
		head = (*stackA)->next;
		(*stackA)->next = head->next;
		head->next = *stackA;
		*stackA = head;
	}
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_struct **stackB)
{
	t_struct	*head;

	if (stackB && (*stackB)->next != NULL)
	{
		head = (*stackB)->next;
		(*stackB)->next = head->next;
		head->next = *stackB;
		*stackB = head;
	}
	write(1, "sb\n", 3);
}

void	ft_swap_ab(t_struct **stackA, t_struct **stackB)
{
	ft_swap_a(stackA);
	ft_swap_b(stackB);
}

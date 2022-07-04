/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:34:52 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 13:36:41 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_push_a(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackB)
	{
		head = (*stackB)->next;
		(*stackB)->next = *stackA;
		*stackA = *stackB;
		*stackB = head;
		write(1, "pa\n", 3);
	}
}

void	ft_push_b(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackA)
	{
		head = (*stackA)->next;
		(*stackA)->next = *stackB;
		*stackB = *stackA;
		*stackA = head;
		write(1, "pb\n", 3);
	}
}

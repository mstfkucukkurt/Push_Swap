/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:35:18 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 13:35:18 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_rot_a(t_struct **stackA)
{
	t_struct	*head;

	if ((*stackA)->next == NULL)
		return ;
	head = (*stackA)->next;
	(*stackA)->next = NULL;
	ft_lstadd_back(&head, *stackA);
	*stackA = head;
	write(1, "ra\n", 3);
}

void	ft_rot_b(t_struct **stackB)
{
	t_struct	*head;

	if ((*stackB)->next == NULL)
		return ;
	head = (*stackB)->next;
	(*stackB)->next = NULL;
	ft_lstadd_back(&head, *stackB);
	*stackB = head;
	write(1, "rb\n", 3);
}

void	ft_rot_ab(t_struct **stackA, t_struct **stackB)
{
	ft_rot_a(stackA);
	ft_rot_b(stackB);
}

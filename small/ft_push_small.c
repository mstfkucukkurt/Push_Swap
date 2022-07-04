/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:35:46 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 13:35:47 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_push_small_a(t_struct **stackA, t_struct **stackB, int flag)
{
	t_struct	*head;

	head = *stackA;
	while (head->next != NULL)
	{
		if (head->index == 0 && flag == 0)
		{
			ft_push_b(stackA, stackB);
			break ;
		}
		if (head->index == 1 && flag == 1)
		{
			ft_push_b(stackA, stackB);
			break ;
		}
		ft_rot_a(stackA);
		head = *stackA;
	}
	free (head);
}

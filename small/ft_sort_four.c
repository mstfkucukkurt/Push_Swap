/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:36:17 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 13:36:17 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sourt_four(t_struct **stackA, t_struct **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag);
	ft_sort_three(stackA);
	ft_push_a(stackA, stackB);
}

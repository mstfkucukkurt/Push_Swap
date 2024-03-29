/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:36:28 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 13:36:29 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_other_three(t_struct **stackA, int *nums)
{
	if (nums[0] > nums[1] && nums[1] > nums[2])
	{
		ft_rot_a(stackA);
		ft_swap_a(stackA);
	}
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] < nums[2])
	{
		ft_swap_a(stackA);
		ft_rot_a(stackA);
	}
}

void	ft_sort_three(t_struct **stackA)
{
	t_struct	*head;
	int			nums[3];
	int			i;

	i = 0;
	head = *stackA;
	while (head != 0)
	{
		nums[i] = head->value;
		head = head->next;
		i++;
	}
	if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] < nums[2])
		ft_swap_a(stackA);
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] > nums[2])
		ft_rev_rot_a(stackA);
	else if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] > nums[2])
		ft_rot_a(stackA);
	else
		ft_other_three(stackA, nums);
}

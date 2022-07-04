/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:32:41 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 17:37:12 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*ft_to_arr(char **s, int counter)
{
	int	*my_arr;
	int	i;
	int	k;

	i = 1;
	k = 0;
	my_arr = (int *)malloc(sizeof(int) * counter);
	while (s[i])
	{
		my_arr[k] = ft_atoi(s[i]);
		k++;
		i++;
	}
	return (my_arr);
}

int	ft_dup_check(char **s, int counter)
{
	int	i;
	int	j;
	int	*my_arr;

	i = 0;
	my_arr = ft_to_arr(s, counter);
	while (i < counter)
	{
		j = i + 1;
		while (j < counter)
		{
			if (my_arr[i] == my_arr[j])
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(my_arr);
	return (1);
}

void	ft_max_min_check(char *a)
{
	if ((ps_atoll(a) <= INT_MAX && ps_atoll(a) >= INT_MIN))
		return ;
	write(1, "Error\n", 6);
	exit (0);
}

int	ft_arg_check(char **s)
{
	int	i;
	int	j;

	i = 1;
	while (s[i])
	{
		ft_max_min_check(s[i]);
		j = 0;
		while (s[i][j] != '\0')
		{
			if (s[i][j] == '-')
				j++;
			if (!ft_isdigit(s[i][j]))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	if (ft_dup_check(s, i - 1) == 0)
		return (0);
	return (1);
}

int	ft_is_sorted(t_struct *stackA)
{
	while (stackA->next)
	{
		if (stackA->value > stackA->next->value)
			return (0);
		stackA = stackA->next;
	}
	return (1);
}

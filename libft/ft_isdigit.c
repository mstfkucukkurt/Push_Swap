/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:30:04 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 13:30:08 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isdigit(int ch)
{
	if (ch > 47 && ch < 58)
	{
		return (true);
	}
	return (false);
}

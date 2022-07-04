/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:31:19 by mkucukku          #+#    #+#             */
/*   Updated: 2022/06/30 16:47:33 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_struct	*ft_lstnew(int value)
{
	t_struct	*cntn;

	cntn = (t_struct *)malloc(sizeof(t_struct));
	if (!cntn)
		return (NULL);
	cntn->value = value;
	cntn->index = -1;
	cntn->next = NULL;
	return (cntn);
}

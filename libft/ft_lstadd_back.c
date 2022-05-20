/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:57:04 by victpier          #+#    #+#             */
/*   Updated: 2022/05/18 14:00:51 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_link;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_link = ft_lstlast(*lst);
			last_link->next = new;
		}
	}
}

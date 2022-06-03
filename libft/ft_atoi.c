/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:52:40 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/06/02 13:02:42 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_overflow(unsigned long long num, int neg)
{
	if (neg == -1 && num > 9223372036854775807)
		return (0);
	else if (neg == 1 && num > 9223372036854775807)
		return (-1);
	return (1);
}
// 9223372036854775807 is LLONG_MAX

int	ft_atoi(const char *str)
{
	int					a;
	int					neg;
	unsigned long long	num;

	a = 0;
	num = 0;
	neg = 1;
	while ((str[a] >= 9 && str[a] <= 13) || (str[a] == ' '))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			neg = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + (str[a] - '0');
		a++;
		if (ft_check_overflow(num, neg) <= 0)
			return (ft_check_overflow(num, neg));
	}
	return (num * neg);
}

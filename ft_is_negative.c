/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:56:03 by akaterin          #+#    #+#             */
/*   Updated: 2023/08/21 17:32:54 by akaterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	postnull;
	char	negative;

	postnull = 'P';
	negative = 'N';
	if (n >= 0)
	{
		write(1, &postnull, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:23:25 by akaterin          #+#    #+#             */
/*   Updated: 2023/08/23 14:35:30 by akaterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_d;
	int	temp_m;

	temp_d = *a / *b;
	temp_m = *a % *b;
	*a = temp_d;
	*b = temp_m;
}
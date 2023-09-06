/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:13:08 by akaterin          #+#    #+#             */
/*   Updated: 2023/09/03 17:52:05 by akaterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	dictionaryconversion(int number);

int	main(int argc, char *argv[])
{
	int	number;
	char	*arg;

	number = 0;
	arg = argv[1];
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	while (*arg)
	{
		if (*arg < '0' || *arg > '9')
		{
			write(2, "Error\n", 6);
			return (1);
		}
		number = number * 10 + (*arg - '0');
		arg++;
	}
	return (dictionaryconversion(number));
}

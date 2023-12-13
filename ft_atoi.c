/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:38:50 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/13 11:37:02 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	z;

	z = 0;
	while (*str != '\0')
	{
		if (z == 0 && !(*str >= '0' && *str <= '9') && !(*str == '-'))
		if (*str != ' ' && *str >= '0' && *str <= '9')
		{
			z *= 10;
			z += *str;
		}
	}
	return (z);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%d", atoi("-3463sdfg  "));
	return (0);
}


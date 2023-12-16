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

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	z;
    int sign;

    z = 0;
    sign = 1;
    while (*str == ' ')
        str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (ft_isdigit(*str))
    {
        z *= 10;
        z += *str - '0';
        str++;
    }
    return (z * sign);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("  -3463sdfg"));
	return (0);
}
*/
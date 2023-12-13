/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:09:26 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/12 15:16:44 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n >= 0)
	{
		if (*(char *)s1 != *(char *)s2)
		{
			return (*(char *)s1 - *(char *)s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (*(char *)s1 - *(char *)s2);
}
/*
#include <string.h>
int	main()
{
	char *s1 = "aaaaab";
	char *s2 = "aaaa";
	printf("%d", ft_memcmp(s1, s2, 6));
}*/

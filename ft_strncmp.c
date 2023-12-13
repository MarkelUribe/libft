/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:32:00 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/12 13:46:45 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n >= 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
/*
int	main()
{
	char *s1 = "aaaaab";
	char *s2 = "aaaa";
	printf("%d", ft_strncmp(s1, s2, 6));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:32:00 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/18 09:57:42 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	diff;

	if (n == 0)
		return (0);
	while (n-- > 1)
	{
		if (*s1 != *s2)
		{
			diff = *(unsigned char *)s1 - *(unsigned char *)s2;
			return ((int)diff);
		}
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int	main()
{
	char *s1 = "aaaaab";
	char *s2 = "aaaa";
	printf("%d", ft_strncmp("abcdefgh", "abcdwxyz", 4));
}
*/
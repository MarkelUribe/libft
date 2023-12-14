/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:57:48 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/14 18:03:00 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (s && n--)
	{
		if (*(char *)s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <string.h>
int	main()
{
	char *s = "hoi nekie";
	printf("%s", ft_memchr("bonjour", 'b', 4));
}*/
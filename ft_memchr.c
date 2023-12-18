/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:57:48 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/18 09:47:21 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*o_s;

	o_s = (unsigned char *)s;
	while (n--)
	{
		if (*o_s == (unsigned char)c)
			return (o_s);
		o_s++;
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
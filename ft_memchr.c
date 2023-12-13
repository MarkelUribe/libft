/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:57:48 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/12 15:17:27 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	ok;

	ok = 0;
	while (*(char *)s != c && *(char *)s != '\0' && n > 0)
	{
		s++;
		n--;
		if (*(char *)s == c)
			ok = 1;
	}
	if (ok)
		return ((char *)s);
	else
		return (NULL);
}
/*
#include <string.h>
int	main()
{
	char *s = "hoi nekie";
	printf("%s", ft_memchr(s, 'j', 80));
}*/

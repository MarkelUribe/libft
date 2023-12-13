/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:05:56 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/12 13:26:22 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	ok;

	ok = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		if (*s == c)
			ok = 1;
	}
	if (ok)
		return ((char *)s);
	else
		return (NULL);
}
/*
int	main()
{
	char *s = "hoi nekie";
	printf("%s", ft_strchr(s, 'j'));
}*/

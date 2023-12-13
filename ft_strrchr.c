/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:27:06 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/12 13:31:24 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		ok;
	char	*p;

	ok = 0;
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			ok = 1;
			p = (char *)s;
		}
	}
	if (ok)
		return ((char *)p);
	else
		return (NULL);
}
/*
int	main()
{
	char *s = "hoi nekie";
	printf("%s", ft_strrchr(s, 'i'));
}*/

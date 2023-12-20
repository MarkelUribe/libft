/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:03:03 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/20 12:59:32 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		digits;
	int		fake;
	int		minus;

	digits = 0;
	minus = 0;
	if (n < 0)
	{
		digits++;
		minus = 1;
		n = -n;
	}
	fake = n;
	while (fake)
	{
		digits++;
		fake /= 10;
	}
	s = (char *)malloc(sizeof(char) * (digits + 1));
	if (!s)
		return (NULL);
	s[digits] = '\0';
	if (minus)
	{
		ft_strlcat(s, "-", 1);
		digits--;
	}
	while (digits)
	{
		s[digits] = (n % 10) + '0';
		n /= 10;
		digits--;
	}
	return (s);
}

int main()
{
	printf("%s", ft_itoa(-345));
}

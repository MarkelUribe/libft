/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:05:58 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/12 11:44:41 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(char *s, size_t n)
{
	while (n > 0)
	{
		*s = '\0';
		s++;
		n--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = "asmoofddhgh";
	ft_bzero(s, 4);
	printf("%s", s);
}*/

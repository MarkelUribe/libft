/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:53:18 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/18 14:07:03 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;

	r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1, ft_strlen(r));
	ft_strlcat(r, s2, ft_strlen(r) + ft_strlen(s2) + 1);
	r[ft_strlen(r) + 1] = '\0';
	return (r);
}

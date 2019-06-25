/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhlatshw <nhlatshw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:15:14 by nhlatshw          #+#    #+#             */
/*   Updated: 2019/06/25 12:33:05 by nhlatshw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			i++;
		}
		while (s2[j] != '\0')
		{
			s1[i + j] = s2[j];
			j++;
		}
	}
	s1[i + j] = '\0';
	return (s1);
}

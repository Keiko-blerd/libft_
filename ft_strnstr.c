/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhlatshw <nhlatshw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:40:48 by nhlatshw          #+#    #+#             */
/*   Updated: 2019/06/27 13:45:27 by nhlatshw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
        size_t  i;
        size_t  j;

        i = 0;
        while (i < n && s1[i] != '\0')
        {
                j = 0;
                while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
                        j++;
                if (s2[j] == '\0')
                        return ((char *)s1 + i);
                i++;
        }
        return (NULL);
}

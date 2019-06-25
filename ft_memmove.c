/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhlatshw <nhlatshw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:43:02 by nhlatshw          #+#    #+#             */
/*   Updated: 2019/06/18 15:49:17 by nhlatshw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*temp;
	char			*src_cast;
	char			*dst_cast;
	size_t			i;

	i = 0;
	src_cast = (char *)src;
	dst_cast = (char *)dst;
	temp = (char *)malloc(sizeof(char) * len);
	ft_memcpy(temp, src_cast, len);
	ft_memcpy(dst_cast, temp, len);
	free(temp);
	return (dst);
}

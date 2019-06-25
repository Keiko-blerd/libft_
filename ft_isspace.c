/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhlatshw <nhlatshw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:10:10 by nhlatshw          #+#    #+#             */
/*   Updated: 2019/06/12 10:26:24 by nhlatshw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if ((c == 9) || (c == 10) || (c == 11) ||
		(c == 12) || (c == 13) || (c == 32))
		return (1);
	else
		return (0);
}

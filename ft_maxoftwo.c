/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxoftwo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 05:28:06 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/29 17:59:07 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_maxoftwo(int i, int m)
{
	if (i == m)
		return (i);
	if (i > m)
		return (i);
	else
		return (m);
}

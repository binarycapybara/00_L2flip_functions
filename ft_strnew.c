/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:02:44 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/26 04:51:31 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*array;
	size_t	comp;
	size_t	orig;
	size_t	check;

	comp = size;
	orig = size;
	check = size;
	check = check * 2;
	comp = check / 2;
	if (comp != orig)
		return (NULL);
	else
	{
		if ((array = (void*)malloc(size + 1)) == NULL)
			return (NULL);
		else
			ft_bzero(array, size + 1);
		return (array);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chel-bou <chel-bou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 21:59:57 by chel-bou          #+#    #+#             */
/*   Updated: 2026/11/07 15:13:56 by chel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	max;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	max = nmemb * size;
	if (max / nmemb != size)
		return (NULL);
	p = malloc(max);
	if (!p)
		return (NULL);
	ft_bzero(p, max);
	return (p);
}

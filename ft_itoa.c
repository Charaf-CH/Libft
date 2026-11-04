/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chel-bou <chel-bou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:26:11 by chel-bou          #+#    #+#             */
/*   Updated: 2026/11/02 14:42:02 by chel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	count_digits(long n)
{
	long	c;

	c = 0;
	if (n <= 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	long	nb;
	long	len;

	nb = n;
	len = count_digits(nb);
	itoa = malloc(len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len > 0)
	{
		itoa[--len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		itoa[0] = '-';
	return (itoa);
}

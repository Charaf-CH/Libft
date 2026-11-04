/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chel-bou <chel-bou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 21:51:20 by chel-bou          #+#    #+#             */
/*   Updated: 2026/11/01 22:15:22 by chel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	begin = 0;
	while (s1[begin] && is_inset(set, s1[begin]))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && is_inset(set, s1[end - 1]))
		end--;
	trim = malloc(end - begin + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (begin < end)
		trim[i++] = s1[begin++];
	trim[i] = '\0';
	return (trim);
}

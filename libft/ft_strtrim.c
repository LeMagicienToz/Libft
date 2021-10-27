/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:44:38 by muteza            #+#    #+#             */
/*   Updated: 2021/10/27 16:08:19 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *s1, int len)
{
	int		i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!ret)
		(NULL);
	while (s1 && (s1[i] && i < len))
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size_s;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	res = ft_substr((char *)s1, 0, size_s + 1);
	return (res);
}

/*
int main()
{
	char	*ret = ft_strtrim("xxx tripouille   xxx", " x");
	printf("%s\n", ret);
}
*/

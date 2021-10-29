/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:59:05 by muteza            #+#    #+#             */
/*   Updated: 2021/10/27 18:16:26 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if (ft_strlen(s + start) < len)
		len = ft_strlen(s);
	if (start > strlen(s))
	{
		return (ft_strdup(""));
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while ((size_t)i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	//printf("%s", substr(str, 0, 5));
	printf("%s", ft_substr(str, 0, 10));
}
*/
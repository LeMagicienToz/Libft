/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:59:05 by muteza            #+#    #+#             */
/*   Updated: 2021/10/27 15:19:57 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;
	size_t	size;

	size = len;
	if (ft_strlen(s) <= len)
		size = ft_strlen(s);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < len && s[start] != '\0' && size != 0)
	{
		str[i] = s[start];
		i++;
		start++;
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
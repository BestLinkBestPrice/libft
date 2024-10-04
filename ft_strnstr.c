/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <nbonnet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:19:31 by nbonnet           #+#    #+#             */
/*   Updated: 2024/10/04 14:52:22 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
	{
		ptr = &((char *)haystack)[i];
		return (ptr);
	}
	while (haystack[j] != '\0' && j < len)
	{
		ptr = &((char *)haystack)[j];
		while (haystack[j] == needle[i] && haystack[j] != '\0' && j < len)
		{
			j++;
			i++;
			if (needle[i] == '\0')
				return (ptr);
		}
		i = 0;
		j++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	haystack[] = "abcabcabc";
	const char	needle[] = "abc";
	size_t	len = 6;

	char *result = ft_strnstr(haystack, needle, len);
	char *result1 = strnstr(haystack, needle, len);

	printf("%s\n", result);
	printf("%s\n", result1);
	return (0);
}
*/

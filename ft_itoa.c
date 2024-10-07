/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <nbonnet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:16:51 by nbonnet           #+#    #+#             */
/*   Updated: 2024/10/07 23:16:51 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	int		nbr;
	char	*dst;

	neg = 1;
	i = 0;
	nbr = n;
	if (n < 0)
	{
		neg *= -1;
		n = n * -1;
		i = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	n = nbr * neg;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	if (nbr < 0)
		dst[0] = '-';
	dest[i] = '\0';
	while (i > 0)
	{
		dst[--i] = (n % 10) + '0';
		n = n / 10;
	}
	return (dst);
}
/*
#include <stdlib.h>
int main(void)
{
    int n;

    n = -12345;
    printf("%s\n", ft_itoa(n));
    return (0);
}
*/

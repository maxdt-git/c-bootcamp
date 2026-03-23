/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:00:00 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/15 14:22:41 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base_return_len(char *base);

int	atoi_base(char *nbr, char *base_from, int base_len);

int	base_pos(char c, char *base);

int	new_size(int nbr, int base_len)
{
	int		size;
	long	n;

	size = 0;
	n = nbr;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / base_len;
		size++;
	}
	return (size);
}

void	int_to_string(char *result, long nbr, char *base_to, int base_len)
{
	int	i;
	int	size;

	size = new_size(nbr, base_len);
	i = size - 1;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		result[0] = base_to[0];
	while (nbr > 0)
	{
		result[i] = base_to[nbr % base_len];
		nbr = nbr / base_len;
		i--;
	}
	result[size] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_from_len;
	int		base_to_len;
	int		num_convert;
	int		size;
	char	*result;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	base_from_len = check_base_return_len(base_from);
	base_to_len = check_base_return_len(base_to);
	if (base_from_len < 2 || base_to_len < 2)
		return (NULL);
	num_convert = atoi_base(nbr, base_from, base_from_len);
	size = new_size(num_convert, base_to_len);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	int_to_string(result, num_convert, base_to, base_to_len);
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*result;

    result = ft_convert_base("42", "012345lahn", "01lzajr");
    printf("Test 1: 42 (base 10) -> hexa = %s\n", result);
    free(result);
}
  

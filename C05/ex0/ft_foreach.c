/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:19:08 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/09 11:02:50 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
        {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = (nb * -1);
    }
    if (nb >= 0 && nb <= 9)
    {
        nb = nb + '0';
        write(1, &nb, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(void)
{
    int tab[5] = {24, -4493, 9384, 8172, 84};
    ft_foreach(tab, 5, &ft_putnbr);
    return (0);
}*/

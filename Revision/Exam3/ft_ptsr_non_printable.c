/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptsr_non_printable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:53:55 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/11 13:08:29 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= 32 && <= 126)
			write(1, &str, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[i] / 16], 1);
			write(1, &hex[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}

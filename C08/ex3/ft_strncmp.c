/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nas <mde-nas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:58:31 by mde-nas           #+#    #+#             */
/*   Updated: 2026/02/16 17:49:42 by mde-nas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>

int     main(void)
{
        char    s1[] = "gLUCPCGUfT7EKz0xDodmdChgnUaTM";
        char    s2[] = "gLUCi6bPx1BHf9VWMG0TKmGou";

        printf("%d\n", ft_strncmp(s1, s2, 5));
        return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:18:35 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 18:33:47 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
	int i;
	
	i = 0;
	if (str[0] == '\0')
		return 1;

	while (str[i] != '\0'){
		if(str[i] < 'A' || str[i] > 'Z')
			return 0;
		i++;
	}
	return 1;
}

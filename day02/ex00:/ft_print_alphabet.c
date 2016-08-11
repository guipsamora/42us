/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:35:13 by gsamora           #+#    #+#             */
/*   Updated: 2016/08/10 14:35:13 by gsamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <"./lib/ft_putchar.h">

void	ft_print_alphabet(void);

void	ft_print_alphabet(void) {

	char c;

	c = 'a';

	while (c <= 'z')
		{
			ft_putchar(c);
			c = c + 1;
		}

	return;
}



int		main(void) {
	
	ft_print_alphabet();
	return(0);
}
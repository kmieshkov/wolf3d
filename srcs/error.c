/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmieshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:23:09 by kmieshko          #+#    #+#             */
/*   Updated: 2018/12/17 18:23:10 by kmieshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	error(char *str)
{
	ft_putstr("Error: ");
	ft_putstr(str);
	ft_putendl("!");
	system("leaks wolf3d");
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isalpha_yes_cap_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:03:02 by bsavinel          #+#    #+#             */
/*   Updated: 2022/01/09 14:00:47 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isalpha.h"

int	isalpha_yes_cap(void)
{
	if (ft_isalpha('A') == 1)
		return (0);
	return (-1);
}
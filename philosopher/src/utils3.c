/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:24:25 by engooh            #+#    #+#             */
/*   Updated: 2022/05/12 13:58:29 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	run_philo(t_all *all)
{
	int	i;

	i = -1;
	while (++i < all->nbp)
		if (pthread_join(all->philo[i].thrid, NULL) < 0)
			free_philo(all, 1, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:16:49 by engooh            #+#    #+#             */
/*   Updated: 2022/05/11 18:54:26 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "../inc/philo.h"

void	start_eat(t_philosopher *all)
{
		if (all->time_to_die - time)	
		printf("timestamp_in_ms X is eating", timestamp(), all->idx);
}

void	*routine(void *argc)
{
	t_philosopher	*all;

	all = argc;
	else
		start_eat(all);
	return (NULL);
}

int	main(int ac, char **av)
{
	int		i;
	t_all	all;

	(void)ac;
	init_philo(&all, -1, av[1], av[2]);
	i = -1;
	while (++i < all.nbr_philo)
		printf("tread id %ld \n", all.philo[i].thrid);
	return (0);
}

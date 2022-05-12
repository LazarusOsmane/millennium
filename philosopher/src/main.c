/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:16:49 by engooh            #+#    #+#             */
/*   Updated: 2022/05/12 16:44:05 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "../inc/philo.h"

void	status_of_philosophers(t_philosopher *p, t_all *a)
{
	if (!pthread_mutex_lock(&p->eat))
	{
		p->tte = timestamp() - a->genese;
		printf("%ld %d has taken a fork\n", p->tte, p->nbp);
		printf("%ld %d is eating\n", p->tte, p->nbp);
		usleep(a->tte * 1000);
		pthread_mutex_unlock(&p->eat);
	}
}

void	*routine(void *argc)
{
	t_philosopher	*philo;

	philo = argc;
	pthread_mutex_lock(&philo->eat);
	printf("start time %ld nbr philo %d\n", timestamp() - ((t_all *)philo->all)->genese, philo->nbp);
	pthread_mutex_lock(&philo->eat);
	return (NULL);
}

int	main(int ac, char **av)
{
	t_all	*all;

	if (ac < 5)
		return (1);
	all = init_philo(av[1], av[2], av[3], av[4]);
	run_philo(all);
	free_philo(all, 1, 0);
	return (0);
}

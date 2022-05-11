/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:47:57 by engooh            #+#    #+#             */
/*   Updated: 2022/05/11 18:56:27 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

long int	timestamp(void)
{	
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

void	free_philo(t_all *all, int error, int exit_code)
{
	if (error)
		perror("");
	free(all->philo);
	if (exit_code > -1)
		exit(exit_code);
}

void	malloc_philo(t_all *all)
{
	memset(all->philo, 0, all->nbr_philo + 1);
	all->philo = malloc(sizeof(t_philosopher) * (all->nbr_philo + 1));
	if (!all->philo)
		return ;
}

void	init_philo(t_all *all, int i, char *nbr_philo, char *time_to_eat)
{
	i = -1;
	all->nbr_philo = ft_atoi(nbr_philo);
	malloc_philo(all);
	while (all->philo[++i])
	{
		all->philo[i].idx = i;
		all->philo[i].time_to_eat = ft_atoi(time_to_eat);
		if (pthread_mutex_init(&all->philo[i].mtxid, NULL) < 0)
			free_philo(all, 1, 1);
	}
	i = -1;
	while (++i < all->nbr_philo)
	if (i % 2 == 0 && pthread_create(&all->philo[i].thrid, NULL, routine, &all->philo[i]) < 0)
			free_philo(all, 1, 1);
		while (++i < all->)
}

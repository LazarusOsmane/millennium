/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:47:57 by engooh            #+#    #+#             */
/*   Updated: 2022/05/12 16:46:57 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	free_philo(t_all *all, int error, int exit_code)
{
	int	i;

	i = -1;
	if (error)
		perror("");
	while (++i < all->nbp)
	{
		pthread_mutex_destroy(&all->philo[i].eat);
	}
	free(all->philo);
	free(all);
	if (exit_code > -1)
		exit(exit_code);
}

void	malloc_philo(t_all *all)
{
	all->philo = malloc(sizeof(t_philosopher) * (all->nbp + 1));
	if (!all->philo)
		return ;
	memset(all->philo, 0, all->nbp + 1);
}

void	creat_mutex(t_all *all)
{
	int	i;

	i = -1;
	while (++i < all->nbp)
	{
		all->philo[i].nbp = i + 1;
		all->philo[i].all = all;
		if (pthread_mutex_init(&all->philo[i].eat, NULL) < 0)
			free_philo(all, 1, 1);
	}
}

void	creat_thread(t_all *all, int is_paire)
{
	int	i;

	i = -1;
	while (++i < all->nbp)
		if (i % 2 == is_paire)
			if (pthread_create(&all->philo[i].thrid, NULL,
					routine, &all->philo[i]) < 0)
				free_philo(all, 1, 1);
}

t_all	*init_philo(char *nbp, char *ttd, char *tte, char *tts)
{
	t_all	*all;

	all = malloc(sizeof(t_all));
	if (!all)
		return (all);
	all->nbp = ft_atoi(nbp);
	all->ttd = ft_atoi(ttd);
	all->tte = ft_atoi(tte);
	all->tts = ft_atoi(tts);
	malloc_philo(all);
	creat_mutex(all);
	all->genese = timestamp();
	printf("Time ref  %ld\n", timestamp() - all->genese);
	creat_thread(all, 0);
	creat_thread(all, 1);
	return (all);
}

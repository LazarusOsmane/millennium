/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:17:07 by engooh            #+#    #+#             */
/*   Updated: 2022/05/11 18:54:31 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/time.h>
# include "../share/libft/libft.h"

typedef struct s_philosopher
{
	pthread_mutex_t		mtxid;
	pthread_t			thrid;
	int					idx;
	long int			time_to_die;
	long int			time_to_eat;
	long int			time_to_sleep;
	long int			time_to_think;
}	t_philosopher;

typedef struct t_all
{
	long int			genese;
	t_philosopher		*philo;
	int					nbr_philo;
}	t_all;

long int	timestamp(void);
void		malloc_philo(t_all *all);
void		*routine(void *all);
void		init_philo(t_all *all, int i, char *nbr_philo, char *time_to_eat);
void		free_philo(t_all *all, int error, int exit_code);
#endif 
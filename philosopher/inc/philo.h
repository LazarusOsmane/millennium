/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:17:07 by engooh            #+#    #+#             */
/*   Updated: 2022/05/12 16:10:18 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
/*	"../src" */
# include <pthread.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/time.h>
# include "../share/libft/libft.h"

typedef struct s_philosopher
{
	pthread_t			thrid;
	pthread_mutex_t		eat;
	pthread_mutex_t		did;
	pthread_mutex_t		slp;
	pthread_mutex_t		thk;
	int					nbp;
	long int			ttd;
	long int			tte;
	long int			tts;
	long int			ttk;
	void				*all;
}	t_philosopher;

typedef struct s_all
{
	int					nbp;
	long int			ttd;
	long int			tte;
	long int			tts;
	long int			ttk;
	long int			genese;
	t_philosopher		*philo;
}	t_all;

long int	timestamp(void);
void		*routine(void *argc);
void		run_philo(t_all *all);
void		malloc_philo(t_all *all);
void		free_philo(t_all *all, int error, int exit_code);
t_all		*init_philo(char *nbp, char *ttd, char *tte, char *tts);
#endif 

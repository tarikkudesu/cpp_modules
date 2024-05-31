# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <pthread.h>
# include <string.h>
# include <sys/time.h>

struct s_philo
{
	int 	t_die, t_eat, t_sleep, nbrPhilos;
	pthread_mutex_t	*forks;
};

struct s_philo data;
size_t	*last_eaten;
size_t	start_time;

long	get_current_time(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

void	ft_usleep(long micro)
{
	long	start;

	start = get_current_time();
	while ((get_current_time() - start) < micro)
		;
	return ;
}


void *routine(void *param)
{
	int *id;

	id = (int *)param;
	last_eaten[*id] = get_current_time();
	if (*id % 2)
		sleep(data.t_eat);
	while (true)
	{
		pthread_mutex_lock(data.forks + *id);
		printf("%ld\t%d\thas taken a fork\n", get_current_time() - start_time, *id);
		if (*id == data.nbrPhilos - 1)
			pthread_mutex_lock(data.forks);
		else
			pthread_mutex_lock(data.forks + *id + 1);
		printf("%ld\t%d\thas taken a fork\n", get_current_time() - start_time, *id);
		printf("%ld\t%d\tis eating\n", get_current_time() - start_time, *id);
		last_eaten[*id] = get_current_time();
		ft_usleep(data.t_eat);
		pthread_mutex_unlock(data.forks + *id);
		if (*id == data.nbrPhilos - 1)
			pthread_mutex_unlock(data.forks);
		else
			pthread_mutex_unlock(data.forks + *id + 1);
		printf("%ld\t%d\tis sleeping\n", get_current_time() - start_time, *id);
		ft_usleep(data.t_eat);
		printf("%ld\t%d\tis thinking\n", get_current_time() - start_time, *id);
	}

	return (NULL);
}

void *checker(void *param)
{
	(void)param;
	ft_usleep(2);
	while (true)
	{
		for (int i = 0; i < data.nbrPhilos; i++) {
			if (get_current_time() - last_eaten[i] > data.t_die) {
				printf("%ld\t%d\tdied\n", get_current_time() - start_time, i);
				exit(0);
			}
		}
	}
	return NULL;
}

int main(int ac, char **av) {

	data.nbrPhilos = atoi(*(av + 1));
	data.t_die = atoi(*(av + 2));
	data.t_eat = atoi(*(av + 3));
	data.t_sleep = atoi(*(av + 4));
	size_t	l[data.nbrPhilos];
	last_eaten = l;

	pthread_mutex_t	t[data.nbrPhilos];
	for (int i = 0; i < data.nbrPhilos; i++) {
		if (0 != pthread_mutex_init(&t[i], NULL))
			return (puts("error"), 1);
	}
	data.forks = t;
	pthread_t tid[data.nbrPhilos];
	int *id = malloc(data.nbrPhilos * 4);

	start_time = get_current_time();
	for (int i = 0; i < data.nbrPhilos; i++) {
		*id = i;
		id++;
		if (0 != pthread_create(tid + i, NULL, routine, id))
			return (puts("error"), 1);
	}

	pthread_t	monitor;
	if (0 != pthread_create(&monitor, NULL, checker, id))
		return (puts("error"), 1);

	if (0 != pthread_join(monitor, NULL))
		return (puts("error"), 1);

	for (int i = 0; i < data.nbrPhilos; i++) {
		if (0 != pthread_join(tid[i], NULL))
			return (puts("error"), 1);
	}
}

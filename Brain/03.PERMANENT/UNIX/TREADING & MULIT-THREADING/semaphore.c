#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int         semaphore = 1;

int wait_semaphore(int s)
{
    while (s == 0)
    {
    }
    s--;
    return (s);
}

int post_semaphore(int s)
{
    s++;
    return (s);
}

void    *routine(void *arg)
{
    int *test_value;

    test_value = (int *)arg;
    wait_semaphore(semaphore);
    *test_value += 1;
    printf("thread test value ==  %d\n", *test_value);
    post_semaphore(semaphore);
    return (NULL);
}
int main(void)
{
    int         i;
    pthread_t   thid[100];
    int         test_value;

    test_value = 0;
    i = -1;
    while (++i < 100)
        pthread_create(&thid[i], NULL, routine, &test_value);
    wait_semaphore(semaphore);
    printf("thread principale test value ==  %d\n", test_value);
    post_semaphore(semaphore);
    return (0);
}

#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int     i;
    struct  timeval tp;

    i = 0;
    while(++i < 6)
    {
        gettimeofday(&tp, NULL);
        printf("sec %ld miroc_sec_unix %ld micro_sec_erick %ld\n", tp.tv_sec, tp.tv_usec, tp.tv_sec * 1000000);
        sleep(1);
    }
    return (0);

}

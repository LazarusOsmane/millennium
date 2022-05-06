# Comment Obtenir l'état de sortie d'un processus enfant ?

## METADATA
> [!INFO]
> MOC                    : [[PROGRAMATION DE PROCESSUS SUR UNIX]] [[Unix]]
> LIEN                     : 
> TYPE DE NOTE   : Note permanente
>  RESOURCE        : https://stackoverflow.com/questions/27306764/capturing-exit-status-code-of-child-process https://www.ibm.com/docs/en/ztpf/1.1.0.15?topic=apis-wexitstatusobtain-exit-status-child-process#cpp_wexitstatus https://www.ibm.com/docs/en/ztpf/1.1.0.15?topic=zca-wifexitedquery-status-see-if-child-process-ended-normally#cpp_wifexited https://www.geeksforgeeks.org/exit-status-child-process-linux/
> DATE PM             : 15/04/2022
> DATE DM             : 15/04/2022

## WIFEXITED Demande l'état pour voir si un processus enfant s'est terminé normalement
*DESCRIPTION :* 

Cette macro interroge l'état de terminaison de l'enfant fourni par wait() et waitpid() et détermine si le processus enfant s'est terminé normalement.
Si le processus enfant se termine normalement wifexited retourne true sinon false.

*FORMAT :*

````
#include <sys/wait.h> 

int WIFEXITED(int status);
````



## WEXITSTATUS Obtient l'état de sortie d'un processus enfant
*DESCRIPTION :* 

Si la macro WIFEXITED indique que le processus enfant s'est terminé normalement, la macro WEXITSTATUS renvoie le code de sortie spécifié par le processus enfant. Sinon
la valeur renvoyée n'a pas de sens.
 
*FORMAT :*

````
#include <sys/wait.h> 

int WEXITSTATUS(int status);
````


## EXAMPLE 

````
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>
#include <unistd.h>

int main(void)
{
    int     pid;
    int     status;
    char *cmd[] = {"ls", "-la", NULL};
    
    pid = fork();
    if (!pid)
        execvp(cmd[0], cmd);
    if (pid > 0)
    {
        wait(&status);
        if (WIFEXITED(status))
        {
            printf("EXIT CODE : %d\n", WEXITSTATUS(status));
        }
    }
    return (0);
}

````



````

total 148
drwxrwxr-x  7 lazarus lazarus  4096 avril 15 13:35 .
drwxr-xr-x 27 lazarus lazarus  4096 avril 15 13:35 ..
-rwxrwxr-x  1 lazarus lazarus 16880 avril 15 13:35 a.out
-rw-rw-r--  1 lazarus lazarus   421 avril 15 13:35 test.c
EXIT CODE : 0

````
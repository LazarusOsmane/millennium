# Comment verifier et lister l'etats d'un processes ? 

## METADATA
> [!INFO]
> MOC                    : [[PROCESSUS DANS LE SHELL]]
> LIEN                     : [[PROCESSUS DANS LE SHELL]] [[PROCESSUS SUR UNIX]] [[Unix]]
> TYPE DE NOTE   : Note permanente
>  RESOURCE        : https://man7.org/linux/man-pages/man1/ps.1.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## ps verfier l'etat des porcessus
*DESCRIPTION :* 
-   **a** – Processus de tous les utilisateurs
-   **U** – Afficher le format orienté utilisateur (affiche des informations supplémentaires sur les processus en cours d’exécution)
-   **X** – Liste des processus qui n’appartiennent à aucune [TTY]
-   **-e** – Affiche les processus en cours d’exécution de tous les utilisateurs
-   **-f** – Affiche la liste complète du format (affiche des informations supplémentaires sur les processus d’exécution)
-
*EXAMPLE :*

````
➜  src git:(master) ✗ ps -aux 
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root           1  0.0  0.1 167692 11488 ?        Ss   08:53   0:02 /sbin/init splash
root           2  0.0  0.0      0     0 ?        S    08:53   0:00 [kthreadd]
root           3  0.0  0.0      0     0 ?        I<   08:53   0:00 [rcu_gp]
root           4  0.0  0.0      0     0 ?        I<   08:53   0:00 [rcu_par_gp]
root           9  0.0  0.0      0     0 ?        I<   08:53   0:00 [mm_percpu_wq]
root          10  0.0  0.0      0     0 ?        S    08:53   0:00 [rcu_tasks_rude_]

````
# Comment obtenir le pid d'un processus ?

## METADATA
> [!INFO]
> MOC                    : [[PROGRAMATION DE PROCESSUS SUR UNIX]] [[Unix]]
> LIEN                     :
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        : https://man7.org/linux/man-pages/man2/getpid.2.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## obtenir le pid d'un processus actuel
*DESCRIPTION :* 
**getpid** () renvoie l'ID de processus (PID) du processus appelant. (Ceci est souvent utilisé par les routines qui génèrent des noms de fichiers.)
     
*FORMAT :*

````
 #include <unistd.h>
       
pid_t getpid(void);
````

## obtenir le pid d'un processus parent
*DESCRIPTION :* 
**getppid** () renvoie l'ID de processus du parent de l'appelant
processus. Ce sera soit l'ID du processus qui a créé
ce processus en utilisant **fork** (), ou, si ce processus a déjà
terminé, l'ID du processus auquel ce processus a été
reparenté (soit [init(1)](https://man7.org/linux/man-pages/man1/init.1.html) soit un processus "subreaper" défini via
l' opération [prctl(2) ](https://man7.org/linux/man-pages/man2/prctl.2.html) **PR_SET_CHILD_SUBREAPER** ).
*FORMAT :*

````
 #include <unistd.h>
       
pid_t getpid(void);

````
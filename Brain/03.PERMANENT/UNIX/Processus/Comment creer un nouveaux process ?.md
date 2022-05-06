# Comment creer un nouveaux processus ?

## METADATA
> [!INFO]
> MOC                    : [[PROGRAMATION DE PROCESSUS SUR UNIX]] [[Unix]]
> LIEN                     : [[C'est quoi la creation de processus ?]] [[C'est quoi un processus ?]]
> TYPE DE NOTE   : Note permanente
>  RESOURCE        : https://cs61.seas.harvard.edu/wiki/images/7/7b/Lec21-Processes.pdf https://man7.org/linux/man-pages/man2/fork.2.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Fork() creer un nouveaux processus
*DESCRIPTION :* 
crée un nouveau processus (processus enfant) qui est une copie identique du processus processus parent
- renvoie 0 au processus enfant
- renvoie l'ID du processus enfant (pid) au processus parent.
- Fork est intéressant (et souvent déroutant) car il est appelé une fois mais renvoie deux fois.
- Tout les processus creer s'excute en meme temps if faut faire des condition avec le retour de fork() pour gerer l'odre d'excution des processus.

*FORMAT :*

````
#include <unistd.h>

pid_t fork(void);  
````

*EXAMPLE 2 :*

````
#include <stdlib.h>
#include <unistd.h>

//Le parent et l'enfant peuvent continuer à bifurquer

void fork2() 
{ 
	printf("L0\n"); 
	fork(); 
	printf("L1\n"); 
	fork(); 
	printf("Bye\n"); 
}

int main(void)
{
	return (0);
}

````

*OUTPUT :*

````
L0
L1
L1
Bye
Bye
Bye
Bye

````

*EXAMPLE 3 :*

````
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//Le parent et l'enfant peuvent continuer à bifurquer

void fork3()
{
 printf("L0\n");
 fork();
 printf("L1\n");
 fork();
 printf("L2\n");
 fork();
 printf("Bye\n");
}

int main(void)
{
    fork3();
	return (0);
}                                                                              
````

*OUTPUT :*

````
L0
L1
L1
L2
L2
Bye
L2
Bye
Bye
Bye
Bye
L2                                                                               
````

*EXAMPLE 4 :*

````
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//Le parent et l'enfant peuvent continuer à bifurquer

void fork4()
{
 printf("L0\n");
 if (fork() != 0) 
 {
     printf("L1\n");
     if (fork() != 0) 
     {
         printf("L2\n");
         fork();
     }
 }
 printf("Bye\n");
}

int main(void)
{
    fork4();
	return (0);
}
                                                                            
````

*OUTPUT :*

````
L0
L1
Bye
L2
Bye
Bye
Bye
                                                                             
````

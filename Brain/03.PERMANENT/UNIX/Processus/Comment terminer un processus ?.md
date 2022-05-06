# Comment terminer un processus ?

## METADATA
> [!INFO]
> MOC                    :
> LIEN                     : 
> TYPE DE NOTE   :
>  REFERENCE       : 
>  RESOURCE        : https://man7.org/linux/man-pages/man3/atexit.3.html https://man7.org/linux/man-pages/man3/exit.3.html
> DATE PM             : JJ/MM/YYYY
> DATE DM             : JJ/MM/YYYY


## Un processus se termine pour l'une des 3 raisons suivantes :
- (1) retour de la procédure main()
- (2) appel à la fonction exit()
- (3) réception d'un signal dont l'action par défaut est de mettre fin au processus.
comme le signal **SIGSTOP ou  SIGTSTP**.
## detruire un process avec exit() et atexit():
*DESCRIPTION :*
- La fonction **atexit** enregistre les fonctions à exécuter lors de la sortie du processus (avant le exit).
- La fonction **exit**  provoque l'arrêt normal du processus status egale aux code d'erreure de sortie de process.

*FORMAT :*

````
 **#include <stdlib.h>**

 **int atexit(void (***_function_**)(void));**
 
 #include <stdlib.h>

 noreturn void exit(int status);

````

*EXAMPLE :*

````
void cleanup(void) 
{ 
	printf("cleaning up\n"); 
} 

void fork6() 
{ 
	atexit(cleanup); 
	fork(); 
	exit(0); 
}

````

*OUTPUT :*

````

````

*RESOURCCE :*
## Concept 
*FORMAT :*

````

````

*EXAMPLE :*

````

````

*OUTPUT :*

````

````

*RESOURCCE :*
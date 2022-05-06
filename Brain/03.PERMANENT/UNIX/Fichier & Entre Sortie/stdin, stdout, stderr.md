# stdin, stdout, stderr

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]] [[PROGRAMTION DES FICHIERS & ENTRER SORTIE]] [[THEORIE DES FICHIERS &  ENTRER SORTIE]] 
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Par défaut Il y a trois descripteurs de fichier standard pour tout les processus qui ne sont pas des demon.
Par défaut Il y a trois descripteurs de fichier standard pour tout les processus qui ne sont pas des demon. Les descripteurs de fichiers STDIN, STDOUT et STDERR portent les numéros définis dans **unistd.h**:

- STDIN_FILENO vaut 0, situer a /dev/fd/0

- STDOUT_FILENO vaut 1, situer a /dev/fd/1

- STDERR_FILENO vaut 2, situer a /dev/fd/2

*EXAMPLE :*

````

➜  src git:(master) ✗ cat /usr/include/unistd.h | grep STD 
#ifndef	_UNISTD_H
#define	_UNISTD_H	1
   _LFS64_STDIO			Standard I/O supports large files.
#define	STDIN_FILENO	0	/* Standard input.  */
#define	STDOUT_FILENO	1	/* Standard output.  */
#define	STDERR_FILENO	2	/* Standard error output.  */
#ifndef	_STDIO_H		/* <stdio.h> has the same definitions.  */

#include <unistd.h>

int main(void)
{
	write(STDOUT_FILENO, "hello\n", 6);
	return (0);
}
````

*OUTPUT :*

````
-> src git:(master) * gcc std.c && ./a.out
hello
````
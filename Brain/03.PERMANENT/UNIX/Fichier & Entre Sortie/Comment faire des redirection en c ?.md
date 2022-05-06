# Comment faire des redirection en c?

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf https://man7.org/linux/man-pages/man2/dup.2.html
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Concept 
L'appel système **dup2** duplique un descripteur de fichier ouvert,
vous permettant de spécifier le descripteur de fichier que vous
ouhaitez.

*FORMAT :*

````
       **#include <unistd.h>**

       **int dup(int** _oldfd_**);**
       **int dup2(int** _oldfd_**, int** _newfd_**);**
````

*EXAMPLE :*

````
#include "unistd,h"
#include "stdio.h"

int main(void)
{
	fd1= open("file1", ORD_ONLY);
	fd2 = open("file2", ORD_ONLY);
	dup2(fd1, fd2);
	close(fd1);
	read(fd2, buf, 6);
	printf("%s", buf);
	return (buf);
}
````

*OUTPUT :*

````
->$ cat -e file1
hello$

->$ cat -e file2
bonjour

->$ gcc dup2.c && ./a.out
hello
````

*RESOURCCE :*
![[Screenshot from 2022-04-23 09-38-17.png]]
![[Screenshot from 2022-04-23 09-38-36.png]]

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
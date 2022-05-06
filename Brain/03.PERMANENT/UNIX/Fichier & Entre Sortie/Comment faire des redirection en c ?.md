# Comment faire des redirection en c?

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf https://man7.org/linux/man-pages/man2/dup.2.html
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## dup2 va rediriger un descripteur de fichier vers un autre descripteur de fichier.

*FORMAT :*

````
       #include <unistd.h>

       int dup(int _oldfd_**);
       int dup2(int _oldfd_, int _newfd_);
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

## dup va dupliquer un descripteur de fichier
*FORMAT :*

````
#include <unistd.h>

 int dup(int oldfd);
````

*EXAMPLE :*

````
int	duplique_fd(void)
{
	int copy_fd;

	fd = open("file.txt", 0_RDONLY);
	if (!fd)
		return (0);
	copy_fd = dup(fd);
	printf("fd = %d copy = %d\n", fd, copy_fd);
}
````

*OUTPUT :*

````
>$ gcc prog.c && ./a.out
fd = 3 copy = 3
````

*RESOURCCE :*
![[Screenshot from 2022-05-06 19-42-34.png]]
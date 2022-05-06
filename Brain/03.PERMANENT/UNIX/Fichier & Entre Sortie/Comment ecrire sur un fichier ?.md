# Comment ecrire sur un fichier ? 

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]] [[PROGRAMTION DES FICHIERS & ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf
> DATE PM             : 19/04/2022
> DATE DM             : 19/04/2022


## la function **write** permet d'ecrire sur un fichier 
- write ecrit des donner sur file descriptor.
- return le nombre d'octet ecrit sur le fd, -1 en cas d'erreur;

*FORMAT :*

````
  #include <unistd.h>

 ssize_t write(int _fd_, const void _buf_, size_t _count_);
````

*EXAMPLE :*

````
#include <unistd.h>

int main(void)
{
	write(1, "hello\n", 6);
	return (0);
}
````

*OUTPUT :*

````
-$ gcc write.c && ./a.out
hello
````


## comment ecrire de maniere plus robuste et securiser 
````
- ssize_t rio_writen(int fh, char *buf, size_t num) ;
````
- Ecrit toujours num octets.
- Retourne num, ou -1 si erreur
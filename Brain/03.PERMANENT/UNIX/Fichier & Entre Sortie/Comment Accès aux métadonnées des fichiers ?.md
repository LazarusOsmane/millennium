# Comment Accès aux métadonnées des fichiers ?

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]] [[PROGRAMTION DES FICHIERS & ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf  https://man7.org/linux/man-pages/man3/fstatat.3p.html
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Utilisez les appels système stat() et fstat() pour accéder aux métadonnées
-  La fonction _fstat_ () doit obtenir des informations sur un fichier ouvert associé au descripteur de fichier _fildes_ , et l'écrira dans la zone pointée par _buf_
*FORMAT :*

````
 #include <sys/stat.h>

 int fstat(int _fd_, struct stat *_buf_);
 int lstat(const char *restrict _pathname_, struct stat *restrict _buf_);
````

*EXAMPLE :*

````

````

*OUTPUT :*

````

````

*RESOURCCE :*
![[Screenshot from 2022-04-19 02-31-06.png]]

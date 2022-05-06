# Comment faire des operations sur les fichiers sur Unix ?

## METADATA
> [!INFO]
> MOC                    :
> LIEN                     : [[Unix]] [[PROGRAMTION DES FICHIERS & ENTRER SORTIE]] [[FICHIER  & ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdfhttps://man7.org/linux/man-pages/man2/open.2.html https://man7.org/linux/man-pages/man2/close.2.html https://man7.org/linux/man-pages/man2/write.2.html https://man7.org/linux/man-pages/man2/read.2.html 
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Concept 
````
int open(char *filename, int flags)
````
- Ouvre le fichier donné, en utilisant les drapeaux (optionnels), et renvoie un fichier.
- Le filehandle est un entier qui peut être utilisé pour toutes les opérations futures sur le fichier.
```
- int close(int fd)
````
- Ferme le fichier, en libérant le filehandle (qui peut être réutilisé par un futur appel à open()).
```
- size_t read(int fd, char *buf, size_t num)
```
- Lit jusqu'à num octets du fichier dans buf et retourne le nombre d'octets lus.
````
- size_t write(int fd, char *buf, size_t num)
````
- Ecrit jusqu'à num octets dans le fichier à partir de buf et renvoie le nombre d'octets écrits.
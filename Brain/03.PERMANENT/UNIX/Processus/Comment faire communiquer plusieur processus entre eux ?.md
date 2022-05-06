# Comment faire communiquer plusieur processus entre eux 

## Comment faire communiquer plusieur processus entre eux 
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[PROCESSUS]] [[PROCESSUS SUR UNIX]] [[PROGRAMATION DE PROCESSUS SUR UNIX]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf https://man7.org/linux/man-pages/man2/pipe.2.html
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## les Pipe permette la communication entre processus.
UNIX fournit plusieurs mécanismes pour la communication inter-processus (IPC)
- Régions de mémoire partagée
- Les sockets (également utilisés pour la communication sur un réseau).
- les pipe
- Un pipe est une paire de descripteurs de fichiers pour la communication entre deux processus.
processus.
- Un processus peut écrire des données à une "extrémité" du pipe.
- L'autre processus peut lire des données depuis l'autre "extrémité" du pipe.
- int pipe(int filedes[2]) ;
- filedes[1] est l'extrémité d'écriture du tube ; filedes[0] est l'extrémité de lecture du tube.

*FORMAT :*

````
 #include <unistd.h>

 int pipe(int pipefd[2]);

````

*EXAMPLE :*
### se refairer au projet pipex.
https://github.com/LazarusOsmane/Pipex

*RESOURCCE :*
![[Screenshot from 2022-05-06 19-51-08.png]]
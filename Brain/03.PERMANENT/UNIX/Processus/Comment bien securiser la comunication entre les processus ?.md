# Titre

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]] [[PROCESSUS]] [[PROGRAMATION DE PROCESSUS SUR UNIX]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf 
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Comment bien securiser la comunication entre les processus ?
- Pour securiser la communication entre les processus:
- close tout les fd herite ou ouvert dans le precessus courant, les leak de fd provoque la creation de processus zombie et peut rendre la communication entre deux processus instable.
- Commet le processus a encore des ressource allouer ici des fd, le processus est achever mais son pid rester dans dans la table de processus il pas donc a l'etat de zombie.

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
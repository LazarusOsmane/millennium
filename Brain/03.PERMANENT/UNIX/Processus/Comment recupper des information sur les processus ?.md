# Comment recupper des information sur les processus ? 

## METADATA
> [!INFO]
> MOC                    : [[PROCESSUS DANS LE SHELL]]
> LIEN                     : [[PROCESSUS DANS LE SHELL]] [[PROCESSUS SUR UNIX]] [[Unix]] [[Comment verifier l'etats d'un processes ?]]
> TYPE DE NOTE   : Note permanente
>  RESOURCE        : http://www.man-linux-magique.net/man8/pidof.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Recuper le pid d'un processus precis 
*DESCRIPTION :* 

*FORMAT :*

````
pidof [-s] [-c] [-n] [-x] [-z] [-o omitpid[,omitpid...]]  [-o omitpid[,omitpid...]...]  [-d sep] program [program...]
````

*EXAMPLE :*

````
➜  src git:(master) ✗ pidof chrome 
20213 20199 20173 20106 19747 19362 19343 19317 19099 12844 12080 11556 11495 11435 11379 11362 11350 10989 10824 7772 7203 5662 5614 5601 5275 4729 4430 2291 2235 2223 2220 2191 2189 2188 2090

````
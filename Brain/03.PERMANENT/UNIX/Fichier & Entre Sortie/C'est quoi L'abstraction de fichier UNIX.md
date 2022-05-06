# C'est quoi L'abstraction de fichier UNIX

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]] [[THEORIE DES FICHIERS &  ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Sous Unix **tout est fichier**
- Sous UNIX, le fichier est l'abstraction de base utilisée pour les E/S.
- Utilisé pour accéder aux disques, CDs, DVDs, périphériques USB et série, aux sockets réseau, et même à la mémoire !
 - Un fichier apparaît à l'application comme **une séquence ordonnée d'octets.**
 - les fichier n'ont **Aucune structure interne** il n'y a donc pas bessions d'extention sur UNIX. 
 
*RESOURCCE :*
![[fileABS.png]]


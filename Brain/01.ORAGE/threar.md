# C'est quoi un thread ?

## METADATA
> [!INFO]
> MOC                    : [[Unix]]
> LIEN                     : [[FICHIER  & ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf http://monge.univ-mlv.fr/~dr/NCSPDF/chapitre16.pdf
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Les processus ne sont pas toujour efficace !
- il sont couteux en resource chaque processus a sa propre table de fd, sa propre stack, sa propre heap, son propre espace d'adresage ect.
plusieur processus lier cree par un seul porgramme auront leur propre memoire 
et non une memoire partage, il seront comme isole des autre.

- cependant il des chose que l'on peut partager avec entre processus comme les data et les privilige, les ressources de l'os (fd, socket ect).
Mais il ya des chose que le peut pas partage comme l'espace d'adressage, la stack, les registre de cpu, ou le compteur de programme.

*RESOURCCE :*
## Un thread est un context d'excution d'un procesus, un segement d'un processus.
 - un thread c'est un contexte d'excution du processus par example on peut lire un livre a la page 1 a la page 2 ou a la page 3 chaque des c'est situation corespond a un contexte d'excution lire un livre.
 
- un processus peut avoir plusieur thread, chaque thread d'un processus partage le meme espace d'edressage et les meme resources de l'os. les thred partage la meme memoire et peuvent donc communiquer directement.
-  les thread ou leur propre stack leur le propre registre cpu, leur prope compteur de programe. 

- Le système d'exploitation maintient deux structures de données internes :
- - Bloc de contrôle de thread (TCB) - Un pour chaque thread.
- - Bloc de contrôle de processus (PCB) - Un pour chaque processus.
- - Chaque TCB pointe vers son PCB "conteneur".

- TCB contient des informations sur un seul thread, l'état du processeurs et le pointeur vers le PCB correspondant. Le PCB contient des informations sur le processus qui le contient, Espace d'adressage et ressources du système d'exploitation ... mais PAS d'état du proccesseurs!

- Les TCB sont plus petites et moins chères que les processus.
- - Linux TCB (thread_struct) a 24 champs
- - Linux TCB (task_struct) a 106 champs
- 
*RESOURCCE :*

## Les thread partage quasiment tout entre eux ! 

Un processus est compose des parties suivantes: 
 - du code
 - des donnees 
 - une pile 
 - des descripteurs de fichiers
 - des tables de signaux. 

Du point de vue du noyau, transferer l’execution a un autre processus revient a rediriger les bons pointeurs et recharger les registres du processeur de la pile.

Les divers threads d’un meme processus peuvent partager certaines parties: 
 - le code
 - les donnees
 - les descripteurs de fichiers
 - les tables de signaux. En fait

ils ont au minimum leur propre pile, et partagent le reste, donc il partage la heap.

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

*RESOURCCE :*%   
Note en plus:
le pcb (block dee controle) est un tableau qui index tout les pid des chaque processus du systeme, pour chaque pid le pcb il y des info sur le processus comme sont etat, son registrer cpu, sont espace d'adressae ect..

 Commutation au sein du même processus :
- Il suffit de sauvegarder les registres du CPU et le PC dans la TCB, puis de les restaurer.
- Cela peut être assez rapide ... quelques dizaines d'instructions.
- 
Quand basculer entre les threads ?
-Planification préemptive
-L'ordonnanceur décide quand il est temps de basculer.
-Suppression forcée d'un thread de l'unité centrale et passage à un autre.
-Ordonnancement coopératif
-alias ordonnancement non préemptif
-Les threads doivent explicitement céder le contrôle
- En appelant une fonction spéciale
-+ve : facilite le raisonnement sur le code concurrent.
- (Au moins, dans les machines à un seul fil)
--ve : un thread peut monopoliser les ressources
-Les systèmes d'exploitation modernes sont généralement préemptifs.

- les thread partage de la memoire, les variable global et static sont partage 
- les variable local ne sont pas partage elle sont diponible seulement dans les stack respective des thread 

FAIRE DE BON THREAD 
controle l'odre des thread


Traduit avec www.DeepL.com/Translator (version gratuite)


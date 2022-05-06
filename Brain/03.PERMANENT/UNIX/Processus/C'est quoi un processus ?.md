+89# What is a process?

## METADATA
> [!INFO]
> MOC                    : [[PROCESSUS SUR UNIX]] [[Unix]] [[THEORIE DES PROCESSUS]]
> LIEN                     :  
> TYPE DE NOTE   : Note permanante
>  RESOURCE        : https://www.geeksforgeeks.org/introduction-of-process-management/ https://cs61.seas.harvard.edu/wiki/images/7/7b/Lec21-Processes.pdf
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Programme vs Processus
*DESCRIPTION :* 
Un processus est une instance d'un programme en cours d'exécution. c'est en fait un programme en excution.
un programme peut creer plusieurs processus.  

Un processus fournit Un espace d'adressage privé Par le mécanisme de la mémoire virtuelle ! Donnant Illusion d'une utilisation exclusive du processeur.

## À quoi ressemble un processus en mémoire 
*DESCRIPTION :* 
_**Section de texte** :_ un processus, parfois appelé section de texte, comprend également l'activité en cours représentée par la valeur du compteur de programme.   
_**stack** :_ la pile contient des données temporaires, telles que des paramètres de fonction, des adresses de retour et des variables locales.   
_**Data** :_ contient la variable globale et static.   
_**Heap** :_ mémoire allouée dynamiquement pour traiter pendant son exécution.   
Reportez-vous à [ceci](https://www.geeksforgeeks.org/memory-layout-of-c-program/) pour plus de détails sur les sections.

*RESOURCCE :*
![[layout 1.png]]
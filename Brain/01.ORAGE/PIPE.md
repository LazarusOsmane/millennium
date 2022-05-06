
# ## SIG_PIPE EST un signal obtene quand lorsque vous essayez d'écrire dans un tube dont l'extrémité de lecture a été fermée

Si tous les descripteurs de fichiers
       se référant à l'extrémité de lecture d'un tuyau ont été fermés, puis un
       write(2) provoquera la génération d'un signal SIGPIPE pour le
       processus d'appel
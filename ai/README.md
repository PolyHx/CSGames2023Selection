# Examen CS Games 2023 - AI

## Mise en situation

Après une session bien coulée, vous êtes bien triste et décidez de vous remonter le moral. Vu que les profs se sont bien amusés à vous faire couler, c'est à votre tour de les couler en retour. Vous démarrez donc une partie de Batttleship et renommez votre adversaire à votre professeur de calculus. Il est maintenant temps de l'éclater autant qu'il vous a éclaté. Bonne chance!

## Battleship pour les nuls

Il aura **5 navires de largeur 1 et de longueur variable**. Ils seront disposés secrètement sur **une grille de taille 10x10**. À chaque tour, vous devez énoncer une case où vous soupçonnez la présence d'une partie d'un navire quelconque. Vous saurez immédiatement s'il s'agit d'un tir réussi (*HIT*), d'un tir manqué (*MISS*) ou d'un tir fatal (*SUNK*).

Vous gagnez si vous faites couler tous les navires adverses.

```Veuillez noter qu'il s'agit d'une version à un joueur de Battleship. Votre but est d'écrire une IA qui minimise le nombre de tour requis pour faire couler les navires.```


## Instructions

**Ne pas modifier autre chose que `Bot.py` SINON VOUS ÊTES COUPÉS**

* Vous devez implanter la méthode `do_turn` de `Bot.py`;
* Cette dernière doit retourner une paire (tuple) ayant:
    * Première composante: la lettre de la colonne désirée (A à J)
    * Deuxième composante: l'index de la rangée désirée (\[0, 9\])
* Vous pouvez ajouter des attributs à la classe `Bot` comme vous voulez
* GL;HF

## Évaluation

Vous serez évalués en fonction de la moyenne du nombre de tours requis pour couler tous les navires.

* Si votre bot prend plus que 90 tours à faire couler tous les navires, l'exécution est stoppée ✂✂✂
* Si votre bot est capable de battre le jeu en moins de 20 tours, j'appelle les inquisiteurs espagnols!

## Remise

Vous devez remettre le fichier `Bot.py`, tout simplement.

## Exécuter
Pour exécuter le programme vous pouvez rouler la commande ci-dessous. Vous pouvez également rajouter un argument qui indique le nombre de partie à jouer et calculer la moyenne à par rapport 
```
$ python3 Main.py <nombre de partie>
```

## Dépendances

Python 3.7+ avec aucun module supplémentaire

*L'exam a été fait sous 3.7.5. Je pense que ça ne peut pas fonctionner en dessous de 3.6.*
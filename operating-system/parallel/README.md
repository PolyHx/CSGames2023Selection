# Champ Électromagnétique (10 pts)


## Mise en Situation
Dans votre laboratoire de PHS1102, on vous demande d'implémenter un résolveur
de [l'équation de Laplace](https://w.wiki/AUG) de manière itérative. Puisque
vous êtes plus _cool_ que les autres, vous avez décider de ne pas le faire sur
Microsoft Excel™, mais bien de faire une version parallèle en C.

## Équation de Laplace

Soit l'équation de Laplace,

![équation](https://i.imgur.com/xRuBea7.png)

mais en réalité, on s'en fou pas mal. La calcule se fait sur une matrice 2D.
Il suffit d'itérer sur chaque point en ordre et d'appliquer un
_[stencil](https://w.wiki/AUN)_ (pas important pour vous) sur chaque points
adjacents, comme l'animation ci-dessous.

![animation](https://i.imgur.com/qluhXkI.gif)

La cellule en vert est la cellule qu'on calcule durant une itération tandis
que les cellules en rouges sont ces dépendances pour le calcule.

On répète ces itérations sur toute la matrice jusqu'à convergence de chaque
cellules. Malheureusement, ce problème n'est pas
_[triviallement parallélisable](https://w.wiki/AUP)_.

## Parallélisation

On ne peut pas tout simplement diviser la matrice en sous-matrices en raison
des dépendances de données. La solution demandée est que chaque fils
d'exécution se suit à la _queue leu leu_, avec une distance de minimum 2
lignes verticales chaque pour éviter des données dépendantes erronées.
L'animation suivante montre 2 fils d'exécution sur une matrice 5 par 8.

![animation-threads](https://i.imgur.com/JQJWAfP.gif)

## Travail Demandé

Vous devez implémenter la répartition du travail de l'algorithme parallèle
avec `pthread` dans le fichier `parallel.c`. Pour calculer une itération sur
une cellule, il suffit d'utiliser la fonction:

```c
double lattice_iterate_point(struct lattice* lattice, int x, int y);
```

Celle-ci vous renvoit la différence entre l'ancienne et la nouvelle valeur de
la cellule. On termine l'algorithme _au moins_ quand les différences de chacune
cellule est sous le seuil `threshold`.

## Compilation et Évaluation

Vous pouvez compiler votre code avec `make` et vous pouvez exécuter une série
de tests avec `make test`.

# Plan Sketch (4 pts)


## Mise en Situation

Vous et votre partenaire de INF8770 avez décidé de faire le laboratoire en C
pour pouvoir «flex» vos skills aux plebs dans votre classe. Le laboratoire se
déroule bien jusqu'attend que vous réalisez que vous avez besoins d'effectuer
une _[transformée en cosinus discrète](https://w.wiki/A7M)_ qui est une tâche
non-triviale à concevoir et à tester en C.

Cela dit, vous n'avez plus le temps de recommencer le tout en un autre
language, vous décidez d'effectuer ce calcul en Python et le reste de votre
programme en C. Les bindings [SWIG](http://www.swig.org/) vous semblant trop
compliqué, vous décidé tout simplement de `fork(2)` et `execve(2)` un script
Python pour vous faire le travail...

## Travail Demandé

Vous devez écrire votre implémentation de la transformée en consinus discrète
dans le fichier `dct.c` en fesant appel à un script Python. Le script Python
est déjà fournit dans `dct.py`.

Il prend en entrée standard les paramètres suivants:

| Ordre | Type           | Description                         |
| ----- | -------------- | ----------------------------------- |
| 1.    | `unsigned int` | Axe de la transformée (0 ou 1)      |
| 2.    | `unsigned int` | Taille en X de la matrice d'entrée  |
| 3.    | `unsigned int` | Taille en Y de la matrice d'entrée  |
| ...   | `double`       | Valeurs de la matrice               |

Il sort à la sortie standard les données suivantes:

| Ordre | Type     | Description           |
| ----- | -------- | --------------------- |
| ...   | `double` | Valeurs de la matrice |

Les valeurs de la matrice sont envoyées ligne par ligne:
```
for j in size_y:
    for i in size_x:
        print(matrix[j][i])
```

## Compilation et Évaluation

Vous pouvez compiler votre code avec `make` et vous pouvez exécuter une série
de tests avec `make test`.

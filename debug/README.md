# Examen CSGames 2023 - Déboguage - 10 pts

## Mise en situation

Le défi de déboguage cert a évaluer vos compétences a déboguer une application éxistante. Vous aurez a déboguer une application de karaoke.

## Logiciel Requis

 * Votre système peut être de n'importequel système d'exploitation, parcontre nous suggérons **Linux**. Toute fois, vous aurez besoin des programmes suivantes: 
   * Un compilateur C++ par exemple: **gcc**, **clang**, **MSVC (Visual Studio)**
   * **cmake**

## Remise
Vous devez remettre une archive avec les fichiers dans `debug/`

## Instructions

* Vous devez réparer le code dans `src/` pour qu'il puisse compiler et passer les tests
* Les fichiers `CMakeLists.txt` sont sans erreurs et ne doivent pas être modifiés
* Les tests dans `tests/` sont sans erreurs et ne doivent pas être modifiés. Tout erreur de compilation et de test doivent être réparé en modifiant le code dans `src/`

## Compilation et éxécution de tests

### Compilation
```shell script
mkdir build
cd build
cmake ..
cmake --build .
```

### Éxécution des tests
```shell script
# Dans le dossier build
./test/karaoke_test
```
